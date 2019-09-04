#include<stdio.h>
#include<stdlib.h>


struct agac{
	
	int data;
	agac *sol=NULL;
	agac *sag=NULL;
};
typedef agac node;

node *ekle(node *gelen,int dat)
{
	if(gelen==NULL)
	{
		gelen=(node*)malloc(sizeof(node));
		gelen->data=dat;
		gelen->sag=NULL;
		gelen->sol=NULL;
	}
	else
		if(gelen->data<=dat)
		{
			gelen->sag=ekle(gelen->sag,dat);
		}
		else
			gelen->sol=ekle(gelen->sol,dat);
	
	
}
int solak(node*gelen)
{
	if(gelen==NULL)
	{
		printf("dugum bos");
		return 0;
	}
	else
		printf("gelen:%d",gelen->data);
		return solak(gelen->sol);
}


int main()
{
	node*root=(node*)malloc(sizeof(node));
	root=NULL;
	root=ekle(root,15);
	root=ekle(root,13);
	root=ekle(root,16);
	root=ekle(root,17);

	root=ekle(root,12);
	printf("		%d\n	%d		%d\n				%d\n%d		",root->data,root->sol->data,root->sag->data,root->sag->sag->data,root->sol->sol->data);
	solak(root);	

	
	
	
	
	
	
	
	
	
	return 0;
}
