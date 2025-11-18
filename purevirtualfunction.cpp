#include<iostream>
using namespace std;
class Base{
	int x;
	public:
		virtual void fun()=0;
};
class Derived:public Base{
	int y;
	public:
		void fun(){
			cout<<"Fun() called";
		}
};
int main(){
	Derived b;
	b.fun();
	return 0;
}
