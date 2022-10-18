#include<iostream>
using namespace std;
class Landline{
	public:
		Landline()
		{
			cout<<"calls ";
		}
};
class Mobile:public Landline{
	public:
		Mobile()
		{
			cout<<"Messages , games";
		}
};
class Smartmobile:public Mobile{
	public:
		Smartmobile()
		{
			cout<<"videocalls , movies";
		}
};
int main()
{
	
	Smartmobile sm1;
}
