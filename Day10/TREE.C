#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *left;
struct node *right;
};
typedef struct node *nodeptr;
nodeptr maketree(int);
nodeptr getnode();
void setl(nodeptr,int);
void setr(nodeptr,int);
void small(nodeptr);
void large(nodeptr);
void main()
{
nodeptr p,q,t;
int i=0,n;
int a;
clrscr();
printf("\n\t\t Binary Tree \n");
printf("Enter n : ");
scanf("%d",&n);
	printf("\nEnter a number : ");
	scanf("%d",&a);
	t=maketree(a);
      // printf("\nEnter no : ");
	while(i<n-1)
	{
	scanf("%d",&a);
	p=t;
	q=t;
	while(a!=p->info && q!=NULL)
	{
	p=q;
	if(a<p->info)
	q=p->left;
	else
	q=p->right;
	}
	if(a==p->info)
	printf("\n%d is a duplicate",a);
	else if(a<p->info)
	setl(p,a);
	else
	setr(p,a);
	i++;
	}
	small(t);
	large(t);
getch();
}
nodeptr getnode()
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
return p;
}
nodeptr maketree(int x)
{
nodeptr p;
p=getnode();
p->info=x;
p->left=NULL;
p->right=NULL;
return p;
}
void setl(nodeptr p,int x)
{
if(p==NULL)
printf("\nInsertion 1 not possible");
else if(p->left!=NULL)
printf("\nInsertion 2 not possible");
else
p->left=maketree(x);
}
void setr(nodeptr p,int x)
{
if(p==NULL)
printf("\nInsertion 3 not possible");
else if(p->right!=NULL)
printf("\nInsertion 4 not possible");
else
p->right=maketree(x);
}
void small(nodeptr t)
{
if(t!=NULL)
small(t->left);
if(t->left==NULL && t->info!=0)
printf("\n%d - small",t->info);
}
void large(nodeptr t)
{
if(t!=NULL)
large(t->right);
if(t->right==NULL && t->info!=0)
printf("\n%d - large",t->info);
}