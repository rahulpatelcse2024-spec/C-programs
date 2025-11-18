#include<iostream>
using namespace std;
int main(){
	float p,r,t,si;
	cout<<"Enter the principal amount: ";
	cin>>p;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	cout<<"Enter the time in years: ";
	cin>>t;
	si=0.01*p*r*t;
	cout<<"The simple interest is : "<<si;
	return 0;
}
