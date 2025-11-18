#include<iostream>
using namespace std;
class code{
	int id;
	public: 
	code(){}
	code(int a){
		id=a;
	}
	//code(code &x){
//		id=x.id;
	//}
	void display(){
		cout<<id;
	}
};
int main(){int a;
	cout<<"ENter a number: ";
	cin>>a;
	code A(a);
	code B(A);
	code C=B;
	cout<<"\n id of A:";
	A.display();
	cout<<"\n id of B:";
	B.display();
	cout<<"\n id of C:";
	C.display();
	code D;
	D=A;
	cout<<"\n id of D:";
	D.display();
	return 0;
}
