#include<stdio.h>
#include<string.h>
#include<stdint.h>


int C,N,L;
int aa[1000];




double meanfunction(int a ,int b){
	int i;
	double sum=0.0,mean;

	for(i=a;i<a+b;i++)
	sum=sum+aa[i];
	
	mean=sum/b;

	return(mean);

}
double result(){
	int i,mini,j,minj;
	double min=meanfunction(0,L);
	
	for(j=0;j<N;j++)
		for(i=0;i<N-(L+j);i++)
		if(min>meanfunction(i,L+j))
		{
			min=meanfunction(i,L+j);
			mini=i;
			minj=j;
		}

		return(min);
}
void main(){

	int i,j;
	double bb[1000]={0.0,};
	scanf_s("%d",&C,1);
	
	for(j=0;j<C;j++){
		scanf_s("%d %d",&N,&L,2);
		for(i=0;i<N;i++)
		scanf_s("%d",&aa[i],1);
		
		bb[j]=result();
		
	}
	for(i=0;i<C;i++)
	printf("%0.4lf\n",bb[i]);



	
}