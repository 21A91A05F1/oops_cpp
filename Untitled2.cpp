#include<iostream>
using namespace std;
class Name{
	public:
		static int a;
		void display()
		{
			a=100;	
		}
};
int Name ::a=500;
int main()
{
	Name obj1;
	obj1.display();

}
