//root of the quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
class Quadratic_root{
	public:
		int a,b,c,d;
		float r1,r2;
		Quadratic_root(int a,int b,int c)
		{
			this->a = a;
			this->b = b;
			this->c = c;
		}
		void caluculate_discriminante()
		{
			this->d = (b*b)-4*a*c;
		}
		void caluculate_roots()
		{
			if(this->d>0)
			{
				this->r1=(-b+sqrt(this->d))/(2*a);
				this->r2=(-b-sqrt(this->d))/(2*a);
				cout<<"roots are real and unequal";
				cout<<r1<<" "<<r2;
			}
			else if(this->d==0)
			{
				this->r1 = -b/(2*a);
				this->r2 =this->r1;
				cout<<"roots are equal"<<" "<<r1<<" "<<r2;
			}
			else
			{
				cout<<"Roots are imaginary";
			}
		}

		
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	Quadratic_root Q1(a,b,c);
	Q1.caluculate_discriminante();
	Q1.caluculate_roots();
	
}
