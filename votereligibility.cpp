#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter age of the candidate: ";
	cin>>a;
	if(a>=18){
		cout<<"The candidate is eligible to vote";
	}
	else{
		cout<<"The candidate is not eligible to vote";
	}
	return 0;
}
