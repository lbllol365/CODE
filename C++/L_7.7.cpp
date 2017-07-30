#include <iostream>
using namespace std;
struct student{
	long int num;
	char name[20];
	char sex;
	float score;
}stu,*p;
int main(){
	p = &stu;
	stu.num  = 89101;
	strcpy(stu.name,"Li lin");
	p->sex = 'M';
	p->score = 89.5;
	cout<<(*p).num<<p->name<<","<<stu.sex<<","<<p->score<<endl;
	return 0;
}