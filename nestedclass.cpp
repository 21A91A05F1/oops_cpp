#include<iostream>
using namespace std;
class A{
	public:
		class B{
			public:
				class C{
					public:
						int a,b,c;
						C(int a, int b,int c)
						{
							this->a=a;
							this->b=b;
							this->c=c;
						}
						void display()
						{
							cout<<this->a<<" "<<this->b<<" "<<this->c;
						}
					
				};
		};
			
};
int main()
{
	A::B::C obj(1,2,3);//creation of obj
	obj.display();
}
