//multilevel inheritance
#include<iostream>
using namespace std;
class vehicle{
	public:
		int speed;
};
class car:public vehicle{
	public:
		string colour;
};
class maruti:public car{
	public:
		void showcolour(){
			cout<<"Colour of the car is "<<colour<<endl;}
		void showspeed(){
			cout<<"Speed of the car is "<<speed<<" km per hr"<<endl;}
};
int main(){
	maruti c1;
	c1.speed=60;
	c1.colour="Red";
	c1.showspeed();
	c1.showcolour();
	return 0;
}
