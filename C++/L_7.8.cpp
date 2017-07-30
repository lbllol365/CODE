#include <iostream>
using namespace std;
struct student{
	long int num;
	char name[20];
	char sex;
	int age;
}stu[3] = {{10101,"Li lin",'M',18},{10102,"Zhang Fun",'M',19},{10104,"Wang Min",'F',20}};

int main(){
	student *p;
	p = stu;
	for(;p<stu+3;p++){
		cout<<p->num<<p->name<<p->sex<<p->age<<endl;
	}
	return 0;
}