#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,n;
printf("Enter N:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if (n%i==0)
  c++;
}
  if(c==2)
  printf("Prime");
  else
  printf("not a prime");
  getch();
  }