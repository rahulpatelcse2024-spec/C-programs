#include <iostream>
using namespace std;
class Base{
	public:
		void display(){
			cout<<"\n Display base";
		}
		virtual void show(){
			cout<<"\n Show base";
		}
};
class Derived:public Base{
	public:
		void display(){
			cout<<"\n Display derived";
		}
		void show(){
			cout<<"\n Show Derived";
		}
};
int main(){
	Base b;
	Derived d;
	Base *p;
	cout<<"\n p points to base \n";
	p=&b;
	p->display();
	p->show();
	cout<<"\n p points to derived \n";
	p=&d;
	p->display();
	p->show();
	return 0;
}
