#include<iostream>
using namespace std;
class cu
{
	int a,b,l,h;
	public:
		void dis(int a);
		void dis(int l,int b,int h);
};
void cu::dis(int a)
{
	cout<<"Volume of cube :"<<a*a*a<<"\n";
}
void cu::dis(int l,int b,int h)
{
	cout<<"\n Volume of cuboid is:"<<l*b*h<<"\n";
}
int main()
{
	cu ob;
	int i;
	cout<<"Enter side of cube:";
	cin>>i;
	cout<<"Enter side of cuboid:";
	int j,k,l;
	cin>>j>>k>>l;
	ob.dis(j,k,l);
	ob.dis(i);
	return 0;
}
