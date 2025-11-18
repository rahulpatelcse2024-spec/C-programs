//multiple inheritance
#include<iostream>
using namespace std;
class father{
	public:
		string Nature;
};
class mother{
	public:
		string colour;
};
class child:public  father, public mother{
	public:
		void showcolour(){
			cout<<"Colour of the child is "<<colour<<endl;}
		void shownature(){
			cout<<"Nature of the child is "<<Nature<<endl;}
};
int main(){
	child c1;
	c1.Nature="Calm";
	c1.colour="Fair";
	c1.showcolour();
	c1.shownature();
	return 0;
	
}
