#include<iostream>
#include<cmath>
using namespace std;
void arm(int a){
	int e=0,temp=a,i,b,sum=0;
	while(temp!=0){
		temp=temp/10;
		e++;
	}
	temp=a;
	while(temp!=0){
		b=temp%10;
		sum=sum+pow(b,e);
		temp=temp/10;
	}
	if(sum==a){
		cout<<a<<" is an Armstrong number";
	}
	else{
		cout<<a<<" is not an Armstrong number";
	}
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	arm(n);
	return 0;
}
