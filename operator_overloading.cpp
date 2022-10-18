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
		Time operator +(Time &T)//what symbol we are going to overload
		{
			Time t3;
			t3.hr=this->hr+T.hr;
			t3.min=this->min+T.min;
			if(t3.min>60)
			{
				t3.hr+=1;
				t3.min-=60;
			}
			return t3;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	cout<<t1.hr<<"."<<t1.min<<endl;
	cout<<t2.hr<<"."<<t2.min<<endl;
	Time t3=t1+t2; //t1.plus(t2)
	//t3=t1+t2+t3 t1.plus(t2+t3) -two args has passed;
	cout<<t3.hr<<":"<<t3.min<<endl;
}
/*
hh :8  7
mm :50 15
8 50
7 15
15 5
*/
