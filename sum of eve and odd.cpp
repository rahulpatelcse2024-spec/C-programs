#include<iostream>
using namespace std;
int main()
{
	int a,sumo=0,sume=0,i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			sume=sume+i;
		}
		else
		{
			sumo=sumo+i;
		}
	}
	cout<<"The sum of odd numbers :"<<sumo<<endl;
	cout<<"The sum of even numbers :"<<sume;
	
}
