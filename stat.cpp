#include<iostream>
using namespace std;
static int count;
class A{
	public:

	void getdata(){
		cout<<++count;
	}
};
int main(){
	A a,b,c;
	a.getdata();
	b.getdata();
	c.getdata();
	return 0;
}
