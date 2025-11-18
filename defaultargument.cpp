#include<iostream>
using namespace std;
int sum(int x,int y,int z=10,int w=10){
	return (x+y+z+w);
}
int main(){
	cout<<sum(10,20)<<endl;
	cout<<sum(10,30,40)<<endl;
	cout<<sum(10,25,25,50)<<endl;
	return 0;

}
