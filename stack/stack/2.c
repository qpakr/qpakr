#include<stdio.h>
#include<string.h>

int top;
char stack[10];
char aa[100];
char bb[100];
void push(char data){
	if(top==10)
		printf("������ �� á��");
	else{
		top++;
		stack[top]=data;
	}
}

void pop(int a){
	if(top==0)printf("������ ���ֽ��ϴ�\n");
	else{
		bb[a]=stack[top];
		top--;	
	}
}
void printstack(){
	int i;
	if(top==0)printf("������ ���ֽ��ϵ��\n");
	else {for(i=0;i<=top;i++)
		printf("%c",stack[i]);
	printf("\n");}



}

main(){
	char data;
	int num=0;
	int i,cnt=0;
	printf("����ǥ������� �ٲ� ����ǥ����� �Է��Ͻÿ�:");
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