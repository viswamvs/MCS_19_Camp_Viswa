#include<iostream>
using namespace std;
int bins(int a[100],int ,int ,int );
int main(){
	int i,a[30],n,t,j,h,l,x,z;
	cout<<"enter N:";
	cin>>n;
	cout<<"\n enter the elements:";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else
			a[i]=a[i];
	l=0;
	h=n-1;
	cout<<"\nEnter Number to search:";
	cin>>x;
	z=bins(a,x,l,h);
	if(a[z]==x)
	cout<<" is Present";
	else
	cout<<"Not present";
	return 0;
}
int bins(int a[100],int x,int l,int h)
{
	int mid;
	if(l>h)
	return(-1);
	else
	mid=(h+l)/2;
	return(x=a[mid]?mid:x<a[mid]?bins(a,x,l,mid-1):bins(a,x,mid+1,h));
	
}
