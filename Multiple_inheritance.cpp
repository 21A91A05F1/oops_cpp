#include<iostream>
using namespace std;
class Student{
	public:
		string rollno,branch;
		Student(string roll,string b){
			rollno=roll;
			branch=b;
		}
};
class Sportsperson{
	public:
		string game;
		int medalcount;
		Sportsperson(string g,int c)
		{
			game=g;
			medalcount=c;
			
		}
};
class Person:public Sportsperson,public Student{
	public:
		string name;
		Person(string n,string g,int c,string roll,string b):
			Sportsperson(g,c),Student(roll,b)
		{
			name=n;
		}
		void display()
		{
			cout<<name<<" "<<game<<" "<<medalcount<<" "<<rollno<<" "<<branch;
		}
};
int main()
{
	Person p1("sudhirsir","cricket",2,"f1","cse");
	p1.display();
}
