#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main(){
	int a,b,c=0,num=0,d;
	
	
	
	srand(time(NULL));
	
	while(c!=1){
	a=rand()%100;
	
	while(num!=1){
		printf("���ڸ� �Է��Ͻÿ�");
		scanf("%d",&b);
		if(a>b)printf("UP");
		else if(a<b)printf("DOWN");
		else {printf("�����Դϴ�");
			num=1;
		}
	}
	printf("���Ͻðڽ��ϱ�?\n1.YES 2.NO");
	scanf("%d",&d);
	if(d==2)c=1;
	else if(d==1)num=0;	
	}




}