#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		char add[20];
		int marks;
		static int count;
		static int sem;
		void info(){
			marks=51;
			marks++;
			count++;
			cout<<"Enter roll no and address of "<<count<<" stduent"<<endl;
			cin>>rollno>>add;
		}
		void showinfo(){
			cout<<"All the details are of "<<count<<" Students"<<endl;
			cout<<"Roll no: "<<rollno<<endl<<"Address:"<<add;
			cout<<endl<<"sem:"<<sem<<endl<<"Marks:"<<marks<<endl;
		}
};
int student::count;
int student::sem=3;
int main(){
	student ram,shyam,sita,geeta;
	ram.info();
	shyam.info();
	sita.info();
	geeta.info();
	ram.showinfo();
	shyam.showinfo();
	sita.showinfo();
	geeta.showinfo();
	return 0;
}
