//single inheritance
#include<iostream>
using namespace std;
class vehicle{
	protected:
		int speed;
};
class car:public vehicle{
	public:
		void showspeed(){
			cout<<"Enter speed of the car: ";
			cin>>speed;
			cout<<"Speed of the car is "<<speed<<" km per hr"<<endl;}
};
int main(){
	car c1;
	//c1.speed=80; error we can't access protected members of a class
	c1.showspeed();
	return 0;
}
