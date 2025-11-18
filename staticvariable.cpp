#include<iostream>
using namespace std;
class A{
	public:
	static int count;
	void getdata(){
		cout<<++count;
	}
};
int A::count;
int main(){
	A a,b,c;
	a.getdata();
	b.getdata();
	c.getdata();
	return 0;
}
