#include<iostream>
using namespace std;
class class_name{
	private:
		int a=20;
	protected:
		int b=10;
	public:
	int fun()
	{
		return a;
		
	}
	
};
int main()
{
	class_name obj1;
	cout<<obj1.fun();
}
