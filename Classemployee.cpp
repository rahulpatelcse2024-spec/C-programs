#include<iostream>
using namespace std;
class Employee
{
    int id;
    float salary;
    public:
    Employee(i,s)
    {
     id=i;
     salary=s;
     
	}
    void display()
    {
    	cout<<"Employee id:"<<i<<endl;
		cout<<"Employee salary:"<<s<<endl;
		
	}
};
int main()
{
 Employee e1;
 Employee e2;
 e1.display(102041,25000);
 e2.display(245241,14000);
 return 0;
}


