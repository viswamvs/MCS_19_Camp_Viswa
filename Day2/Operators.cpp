#include<iostream>
using namespace std;
int main()
{
	int ch,a,b,c;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"1.Addition"<<"\n";
	cout<<"2.Subtraction"<<"\n";
	cout<<"3.Multiplication"<<"\n";
	cout<<"4.Division"<<"\n";
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			c=a+b;
			break;
		case 2:
			c=a-b;
			break;
		case 3:
			c=a*b;
			break;
		case 4:
			c=a/b;
			break;
	}
	cout<<"Result="<<c<<"\n";
	return 0;
}
