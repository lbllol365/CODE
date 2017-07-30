#include <iostream>
#include <iomanip>
using namespace std;
struct person{
	char name[12];
	int age;
	int profession;
	union level{
		int grade;
		char rank[20];
		char title[20];
	}m;
};
int main(){
	person body[20];
	int i;
	for(i=0;i<3;i++){
		cout<<"Please enter name age number {0:student;1:manager;2:teacher}\n";
		cin>>body[1].name>>body[i].age>>body[i].profession;
		if(body[i].profession == 0){
			cout<<"Please enter student's grade";
			cin>>body[i].m.grade;
		}
		else if(body[i].profession == 1){
			cout<<"Please enter zhiwu";
			cin>>body[i].m.rank;
		}
		else 
		{
			cout<<"Please enter profession";
			cin>>body[i].m.title;
		}
	}
	cout<<"name  age   leibiexinxi\n";
	for(i=0;i<3;i++){
		cout<<setw(10)<<body[i].name<<setw(5)<<body[i].age;
		if(body[i].profession == 0) cout<<setw(20)<<body[i].m.grade;
		else if(body[i].profession ==1 ) cout<<setw(20)<<body[i].m.rank;
		else cout<<setw(20)<<body[i].m.title;
		cout<<endl;
	}
	return 0;
}