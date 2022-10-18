#include<iostream>
using namespace std;
class Time{
	public:
		int hr,min;
		Time()
		{
			
		}
		Time(int hh , int mm)
		{
			hr=hh;
			min=mm;
		}
		void operator ++()//what symbol we are going to overload
		{
			hr++;
			min++;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	++t1;
	++t2;
	cout<<t1.hr<<":"<<t1.min<<endl;
	cout<<t2.hr<<":"<<t2.min<<endl;
}
/*
hh :8  7
mm :50 15
9 51
8 16
*/
