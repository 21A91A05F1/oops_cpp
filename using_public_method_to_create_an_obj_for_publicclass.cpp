#include<iostream>
using namespace std;
class A{
	public:
		create()
		{
			B obj2(1,2);
			obj2.display();
		}
		private:
			class B{
				public:
					int a,b;
					B(int a,int b)
					{
						this->a=a;
						this->b=b;
					}
					void display()
					{
						cout<<this->a<<" "<<this->b;
					}
			};
		
};
int main()
{
	A obj1;
	obj1.create();
}
