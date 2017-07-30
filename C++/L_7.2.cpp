#include <iostream>
using namespace std;
const int n = 5;
struct student
{
	long number;
	char name[12];
	float score[4];
} stu[n];
void input();
void calculate();
void output();
int main(){
	input();
	calculate();
	output();
	return 0;
}
void input(){
	cout<<"Input the number ,name,and scores: \n";
	for(int i = 0;i<n;i++){
		cout<<i<<" number:";
		cin>>stu[i].number;
		if(stu[i].number == 0) break;
		cout<<" name:"; cin>>stu[i].name;
		cout<<" yingyu:"; cin>>stu[i].score[0];
		cout<<" shuxue: "; cin>>stu[i].score[1];
		cout<<" yuwen :"; cin>>stu[i].score[2];
	}
}
void calculate()
{
	for(int i=0;i<n;i++){
		if(stu[i].number == 0) break;
		stu[i].score[3] = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2] ) / 3;
	}
}
void output(){
	for(int i=0;i<n;i++){
		if(stu[i].number == 0) break;
		cout<<i<<": "<<stu[i].number <<"  "<<stu[i].name<<"  ";
		for(int j=0;j<=3;j++)
			cout<<stu[i].score[j]<<"  ";
		cout<<endl;
	}
}
