#include<iostream>
using namespace std;
class integer{
	int m,n;
	public: 
	integer(int a,int b){
		m=a;
		n=b;
		cout<<"m="<<m<<endl<<"n="<<n<<endl;

	}
};
int main(){
	integer int1(0,100);
	integer int2=integer(25,76);
	return 0;
}
