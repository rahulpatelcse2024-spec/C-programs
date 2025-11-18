#include<iostream>
using namespace std;
class Swaping{
	public:
	void swap(int *a,int *b);
};
void Swaping::swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	Swaping s;
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	s.swap(&x,&y);
	cout<<"After swapping numbers are: "<<x<<endl<<y;
	return 0;
}


