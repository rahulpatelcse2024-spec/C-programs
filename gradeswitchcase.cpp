#include<iostream>
using namespace std;
int main(){
	char g;
	cout<<"Enter a grade: ";
	cin>>g;
	switch(g){
		case 'E':
			cout<<"Excellent";
			break;
		case 'V':
			cout<<"Very good";
			break;
		case 'G':
			cout<<"Good";
			break;
		case 'A':
			cout<<"Average";
			break;
		case 'B':
			cout<<"Bad";
			break;
		case 'F':
			cout<<"Fail";
			break;
		default:
			cout<<"Invalid input";
	}
	return 0;
}
