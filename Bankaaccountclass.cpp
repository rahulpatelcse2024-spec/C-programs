#include<iostream>
using namespace std;
class Bankaccount{
	public:
		string name,type;
		int acc;
		float bal,dep,with;
		void printdata(string n,string t, int a,float b){
			cout<<"Name of depositer: "<<n<<endl;
			cout<<"Type of account: "<<t<<endl;
			cout<<"Account number: "<<a<<endl;
			cout<<"Balance amount: "<<b<<endl;
			bal=b;
		}
		void dept(float d){
			cout<<"Deposited amount: "<<d<<endl;
			cout<<"Balance amount: "<<bal+d<<endl;
			bal=bal+d;
		}
		void withd(float w){
			cout<<"Withdraw amount: "<<w<<endl;
			if(bal<w){
			cout<<"Insufficient balance "<<endl;}
			else{
				cout<<"Balance amount: "<<bal-w<<endl;
			}
		}
		
};
int main()
{
	Bankaccount ac1;
	ac1.name="Rahul Patel";
	ac1.type="Savings Account";
	ac1.acc=552801;
	ac1.bal=20550.60;
	ac1.dep=1000;
	ac1.with=21000;
	ac1.printdata(ac1.name,ac1.type,ac1.acc,ac1.bal);
	ac1.dept(ac1.dep);
	ac1.withd(ac1.with);

return 0;
}

