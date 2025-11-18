#include<iostream>
using namespace std;
class Student{
	public:
	string name,branch;
	int section,cgpa;
		void details(string name,string branch,int section,int cgpa){
			cout<<"Name= "<<endl;
			cout<<"Branch= "<<endl;
			cout<<"Section= "<<endl;
			cout<<"CGPA= "<<endl;
		}
};
int main(){
	Student s;
	string name,branch;
	int section,cgpa;
	s.name="Rahul Patel";
	s.branch="CS";
	s.section=4;
	s.cgpa=7;
	s.details(name,branch,section,cgpa);
	return 0;

}
