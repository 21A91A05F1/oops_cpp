#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		A(int a,int b)//A(int x,int y)
		{
			this->a=a;  // a=x;
			this->b=b; //  b=y;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b;
		}
};
int main()
{
	A obj(10,20);
	//cout<<obj.a<<" "<<obj.b;
	obj.display();
}
