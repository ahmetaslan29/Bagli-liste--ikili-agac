#include<stdio.h>
#include<stdlib.h>

 struct node
{
	int deger;
	node *next;
};
typedef node *bagli;
bagli *push;
bagli *pop;
bagli *head;


int basaekle()
{
	pop=(bagli*)malloc(sizeof(bagli));
	pop->deger=28;
	pop->next=head;
	head=pop;
	
}
int bastir(bagli *bas)
{
	while(bas!=NULL)
	{
		printf("head:%d\n",bas->deger);
		bas=bas->next;
		
	}
	
}
int main()
{
	push=(bagli*)malloc(sizeof(bagli));
	push->deger=29;
	head=push;
	int i;
	for(i=0;i<=12;i++)
	{
		printf("pushin degerleri:%d\n",push->deger);
		push=push->next=(bagli*)malloc(sizeof(bagli));
		push->deger=i+30;
		push->next=NULL;
	}
	basaekle();
	bastir(head);
	
	
	
	return 0;	
}
