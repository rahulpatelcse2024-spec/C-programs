#include<iostream>
using namespace std;
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<a<<endl<<b;
}
int main(){
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<"After swapping numbers are: ";
	swap(x,y);
	return 0;
}

