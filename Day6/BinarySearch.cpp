#include <iostream>
using namespace std;
int main()
{
	int count, i, arr[30], num, first, last, middle;
	cout<<"\n BINARY SEARCH";
	cout<<"\n Enter no of elements : "; 
	cin>>count;
	cout<<"Enter the elements : "; 
	for(i=0;i<count;i++)
	{
	cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:"; 
    cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" is found "<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<num<<" not found ";
	}
	return 0;
}
