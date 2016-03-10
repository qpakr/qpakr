#include<stdio.h>
#include<string.h>

int top;
char stack[10];
char aa[100];
char bb[100];
void push(char data){
	if(top==10)
		printf("스택이 꽉 찼음");
	else{
		top++;
		stack[top]=data;
	}
}

void pop(int a){
	if(top==0)printf("스택이 비여있습니다\n");
	else{
		bb[a]=stack[top];
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
	int i,cnt=0;
	printf("후위표기법으로 바꿀 중위표기식을 입력하시오:");
	scanf("%s",aa);
	
		
		for(i=0;i<strlen(aa);i++)
		{
			if (aa[i]==')'){pop(cnt);cnt++;}
		else if (aa[i]=='(');
		else if(aa[i]=='+'){push(aa[i]);}
		else if(aa[i]=='-'){push(aa[i]);}
		else if(aa[i]=='*'){push(aa[i]);}
		else if(aa[i]=='/'){push(aa[i]);}
		else {bb[cnt]=aa[i];cnt++;}

		}
		
	printf("%s",bb);


	


	getchar();





}