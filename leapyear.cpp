#include<iostream>
using namespace std;
int main(){
	int y;
	cout<<"Enter a year: ";
	cin>>y;
	if(y%4==0 && y%100!=0 || y%400==0){
		cout<<"The year is leap year";
	}
	else{
		cout<<"The number is not a leap year";
	}
	return 0;
}
