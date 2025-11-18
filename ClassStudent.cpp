#include<iostream>
using namespace std;
class Student
{
	string name;
	int marks;
public:
Student(string n, int m)
{
	name=n;
	marks=m;
	}
Student(Student &s)	{
	name=s.name;
	marks=s.marks;
	}
	void display()
	{
		cout<<"Name:"<<name<<",Marks"<<marks<<endl;
	}
	
	
};
int main()
{
	Student s1(Ram,87);
	Student s1=s2;
	s1.display();
	s2.display();

}
	
	
	
	
