#include<stdio.h>
#include<string.h>

int top;
char stack[10];
void push(char data){
	if(top==10)
		printf("������ �� á��");
	else{
		top++;
		stack[top]=data;
	}
}

void pop(){
	if(top==0)printf("������ ���ֽ��ϴ�\n");
	else{
		printf("%c�� ���ÿ��� �����Ǿ����ϴ�.\n",stack[top]);
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
	while(num!=4)
	{	
		printf("1:���ÿ� �Է�(push) \n2:���ó������(pop)\n3:������ü���\n4:����\n");
		scanf("%d",&num);
		
	switch(num)
	{
		case 1:
			printf("���ÿ� �Է��� ���ڸ� �Է��Ͻÿ� : ");
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