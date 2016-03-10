#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main(){
	int a,b,c=0,num=0,d;
	
	
	
	srand(time(NULL));
	
	while(c!=1){
	a=rand()%100;
	
	while(num!=1){
		printf("숫자를 입력하시오");
		scanf("%d",&b);
		if(a>b)printf("UP");
		else if(a<b)printf("DOWN");
		else {printf("정답입니다");
			num=1;
		}
	}
	printf("더하시겠습니까?\n1.YES 2.NO");
	scanf("%d",&d);
	if(d==2)c=1;
	else if(d==1)num=0;	
	}




}