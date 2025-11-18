#include<iostream>
using namespace std;
int fact(int n)
{
	int i,f;
	for(i=0;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial is:"<<f;
}
int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	fact(n);
	
}
