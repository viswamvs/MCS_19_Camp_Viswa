#include <iostream>
using namespace std;
class time
{
	private:
		int h,m;
	public:
	    void gd();
		void pd();
		time conv(time);
		time sum(time,time);	
};
void time::gd()
    {
		cout<<"enter the time in hr:min\n";
		cin>>h>>m;
	}
void time::pd()
	{
		cout<<h<<"hrs"<<":"<<m<<"min";
	}
time time::conv(time t3)
	{
		if(t3.m>=60)
			{
				t3.m=t3.m-60;
				t3.h++;
			}
			return t3;
	}
time time::sum(time t1,time t2)
	{
		time t;
		t.m=t1.m+t2.m;
		t.h=t1.h+t2.h;
		return t;
	}
int main()
	{
		time t1,t2,t3;
		t1.gd();
		t2.gd();
		t3=t3.sum(t1,t2);
		t3=t3.conv(t3);
		t3.pd();
	    return 0;
	}	
