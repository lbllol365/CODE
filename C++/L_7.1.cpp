#include <iostream>
using namespace std;
int main(){
	struct {
		int age;
		int gread;
		char sex[10];
		int student_number;
	}student1,student2;
	cout<<"PLease enter student1's message!!"<<endl;
	cout<<"age: "<<endl;
	cin>>student1.age;
	cout<<"gread: "<<endl;
	cin>>student1.gread;
	cout<<"sex : "<<endl;
	cin>>student1.sex;
	cout<<"student1_number: "<<endl;
	cin>>student1.student_number;
	cout<<student1.age<<'\t'<<student1.gread<<'\t'<<student1.sex<<'\t'<<student1.student_number<<endl;
}