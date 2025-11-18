#include<iostream>
using namespace std;
int fun1(int,int);
int fun2(int *,int *);
int main(){
	int a,b,c,d;
	cout<<"Enter A and B: "<<endl;
	cin>>a>>b;
	int k=fun1(a,b);
	cout<<"Outside function"<<endl;
	cout<<" A="<<a<<endl<<endl<<" B="<<b<<endl;
	cout<<"Output of value addion k="<<k<<endl<<endl;
		cout<<a;

	cout<<"Enter C and D\n";
	cin>>c>>d;
	int l=fun2(&c,&d);
	cout<<"Outside function"<<endl;
	cout<<" C="<<c<<endl<<endl<<" D="<<d<<endl;
	cout<<"Output of address addition l="<<l<<endl;
	return 0;
}
int fun1(int x,int y){
	cout<<" X="<<x<<endl<<endl<<" Y="<<y<<endl;
	x=3;
	y=4;
	cout<<"After "<<endl<<"inside function"<<endl<<"X="<<x<<endl<<"Y="<<y<<endl;
	return x+y;
}
int fun2(int *p,int *q){
	cout <<"Address of P="<<p<<endl<<"Address of Q="<<q<<endl;
	cout<<"P= "<<*p<<endl<<"Q="<<*q<<endl;
	*p=2;
	*q=7;
	cout<<"After "<<endl<<"Inside function"<<endl<<"P="<<*p<<endl<<"Q="<<*q<<endl;
	return *p+*q;
}
