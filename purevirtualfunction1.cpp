#include<iostream>
using namespace std;
class Base{
	int x;
	public:
		 	void fun(){
			cout<<"Fun() called";
		}
};
class Derived:public Base{
	int y;
	public:
		void fun(){
			cout<<"Fun() called";
		}
};
int main(){
Base b;
	Derived d;
	Base *p;
	p=&b;
	p=&d;
	p->fun();
	return 0;
}
