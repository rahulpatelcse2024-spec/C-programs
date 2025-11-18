#include<iostream>
using namespace std;

class Car
{
 string company;
 int price;
 

public:
 Car()
  {
  company= 'unknown';
  price=0;
  	
  }
 void display()
  {
 	cout<<"company:"<<company<<"price"<<price<<endl;
 	
  }
};
int main(){
	Car c1;
	c1.display();
	return 0;
}
