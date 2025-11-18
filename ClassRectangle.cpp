#include<iostream>
using namespace std;
class Rectangle
  {
	int l,b;
	

public:
	Square(int side){
	  lenth=side;	
	}

    Rectangle ()	{
    	length=0;
    	breadth=0;
	}
    Rectangle (int l,int b)
	{
		lenth=l;
		breath=b;
	}
	void area()
	{
	cout<<"The area of square:"<<l*l<<endl;
	cout<<"The area of rectangle:"<<l*b<<endl;
	
	}
  };
	int main()
	{
	Square s1(35);
	Rectangle r1(2,3)
	s1.area();
	r1.area();
	return 0;
    }
	
	
	
	
	
