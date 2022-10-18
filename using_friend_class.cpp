#include<iostream>
using namespace std;
class A{
	public:
		friend class C;
	private:
		class B{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a =a;
					this->b =b; 
				}
				void display()
				{
					cout<<this->a <<" "<<this->b;
				}
		};
};
class C
{
	public: 	
	c()
	{
		A::B obj2(1,2);
		obj2.display();
	}
}
int main()
{
	A obj;
}
