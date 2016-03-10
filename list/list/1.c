#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct t_rec {
	int id;
	char name[16];
	double ave;
	int game;
	struct t_rec *next;
} Student;

Student *head = NULL;
Student *tail=NULL;

void Append(int n, char *s, double d, int g) {
	Student *p;
	if (head == NULL) {
		head = (Student *) malloc(sizeof(Student));
		head->id = n;
		head->game =g;
		head->ave = d;
		strcpy(head->name, s);
		head->next = NULL;
	}
	else {
		p = head;
		while (p->next != NULL)
			p = p->next;
		p->next = (Student *) malloc(sizeof(Student));
		p = p->next;
		p->id = n;
		p->game =g;
		p->ave = d;
		strcpy(p->name, s);
		p->next = NULL;
	}
	return;
}

void Append2(){
	Student *p,*n;
	p=head;
	
		while (p != NULL){
		n=tail;
		tail = (Student *) malloc(sizeof(Student));
		tail->id =p->id;
		tail->game =p->game;
		tail->ave = p->ave;
		strcpy(tail->name, p->name);
		tail->next =n;
		p=p->next;
		}
	}
void ShowList2() {
	Student *p;

	printf("Items in the list\n");
	p = tail;
	while ( p != NULL) {
		 printf("%4d %16s %4.3lf %4d \n", p->id, p->name, p->ave, p->game);
		 p = p->next;
	}
	return;
}






void ShowList() {
	Student *p;

	printf("Items in the list\n");
	p = head;
	while ( p != NULL) {
		 printf("%4d %16s %4.3lf %4d \n", p->id, p->name, p->ave, p->game);
		 p = p->next;
	}
	return;
}

void Delete(char *s) {
	Student *p, *t;

	if (!strcmp(head->name, s)) {
		p = head;
		head = head->next;
		free(p);
	}
	else {
		p = head;
		while (p->next != NULL) {
			if (! strcmp(p->next->name, s)) {
				t=p->next;
				p->next = t->next;
				free(t);
				break;
			}
			p = p->next;
		}
	}
	return;
}

void Insert(char *after, int n, char *s, double d, int g) {
	Student *p, *t;

	p = head;
	while (p != NULL) {
		if (! strcmp(p->name, after)) {
			t = p->next;
			p->next = (Student *) malloc(sizeof(Student));
			p = p->next;
			p->id = n;
			p->game =g;
			p->ave = d;
			strcpy(p->name, s);
			p->next = t;
			break;
		}
		p = p->next;
	}
	return;
}

FreeAll() {
	Student *p, *t;

	p = head;

	while ( p!= NULL) {
		t= p->next;
		free(p);
		p =t;
	}
	head =  NULL;
	return;
}

DeleteLast() {
	Student *p, *t;

	p = head;

	while (p->next->next != NULL)
		p = p->next;
	t = p->next;
	p->next = NULL;
	free(t);
}

DeleteLast2() {
	DeleteLast();
	DeleteLast();
}

double TwoAve(char *s)
{
	Student *p, *t;
	double a=0,b=0;
	double sum=0;
	int cnt=0;
	p=head;

	while (p != NULL)
	{
		if(!strcmp(p->name, s))
		{cnt=1;
			}
		if(cnt==1){sum=sum+p->ave;}
		t=p;
		p=p->next;
	}
	return(sum);
}

main() {
	
	Append(1, "애니프로스트", 0.986, 98);	
	Append(4, "잭말론", 0.567, 43);
	Append(2, "호레시오케인", 0.452, 87);	
	Append(3, "맥테일러", 0.876, 43);
	Append(8, "길그리썸", 0.365, 89);	
	Append(9, "브렌다리존스", 0.789, 43);
	Append(6, "칼라이트만", 0.212, 69);	
	Append(5, "질리안포스터", 0.333, 38);	
	Append(7, "올리비아벤슨", 0.756, 67);
	Append(10, "엘리엇스테이블러", 0.555, 54);
	
	ShowList();
	Append2();
	ShowList2();
	FreeAll();
//	getchar();
}
