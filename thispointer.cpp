 #include<iostream>
using namespace std;
class complex{
	public:
		int a,b;
	    void setdata(int a,int b){
		this->a=a;
		this->b=b;
		}
		void getdata(){
			cout<<"A is : "<<a<<endl;
			cout<<"B is : "<<b<<endl;
			}
};
int main(){
	complex c1;
	complex *ptr=&c1;
//	ptr->setdata(4,7);
//	ptr->getdata();
	(*ptr).setdata(3,8);
	(*ptr).getdata();
	return 0;
}
