#include <stdio.h>
//#include <conio.h>
#define n=100
int stack [10],top;
void create (int []);
void push (int[],int[]);
void pop (int[]);
int main()
{
	int item[10],op=0,top=-1;
	int j,m,i;
	printf("enter the option to choose\n1:create\n2:insert(push)\n3:remove(pop)\n4:exit");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			create(stack);
			break;
		case 2:
			printf("enter the total number ofitems:");
			scanf("%d",&m);
			printf("enter the items to pushed inside");
			for(j=0;j<m;j++)
			{
				scanf("%d",&item[j]);
				push (stack,item[i]);
			}
			break;
		case 3:
			pop(stack);
			break;
		case 4:
			printf("print any key to exit");
			break;
		default:
			printf("invalid choice");
			break;
	}
	while(op!=4)
	return 0;
}
void create (int stack[])
{
	int i=0;
	if(top==-1)
	{
		printf("the stack is empty\n");
	}
	printf("%d--top\n",stack[top]);
	for(i=top-1;i>=0;i--)
	{
		printf("\n%d",stack[i]);
	}
	printf("\n");
}
void push (int stack[],int item)
{
if(top=n-1)
{
	printf("the stack is full\n");
}
top++;
stack[top]=item;
}
void pop (int stack[])
{
int d;
if(top==-1)
{
	printf("the stack is full\n");
}
else
{
	d=stack[top];
	top--;
	printf("the item is deleted\n");
	return;
}
}


