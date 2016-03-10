#include<stdio.h>
#include<string.h>

int top;
char stack[10];
void push(char data){
	if(top==10)
		printf("스택이 꽉 찼음");
	else{
		top++;
		stack[top]=data;
	}
}

void pop(){
	if(top==0)printf("스택이 비여있습니다\n");
	else{
		printf("%c가 스택에서 삭제되었습니다.\n",stack[top]);
		top--;	
	}
}
void printstack(){
	int i;
	if(top==0)printf("스택이 비여있습니딘다\n");
	else {for(i=0;i<=top;i++)
		printf("%c",stack[i]);
	printf("\n");}



}

main(){
	char data;
	int num=0;
	while(num!=4)
	{	
		printf("1:스택에 입력(push) \n2:스택내용삭제(pop)\n3:스택전체출력\n4:종료\n");
		scanf("%d",&num);
		
	switch(num)
	{
		case 1:
			printf("스택에 입력할 문자를 입력하시오 : ");
			getchar();
			scanf("%c",&data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:printstack();
			break;

	}
	}









}