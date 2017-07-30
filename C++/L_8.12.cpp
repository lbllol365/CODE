#include <iostream>
#include <string>
using namespace std;
class CStudent
{
public:
	CStudent(int,string);
	~CStudent();
	static int GetTotal();
	void Print();
private:
	int id;
	string name;
	static int noofStds;
};
CStudent::CStudent(int i,string na)
{
	id = i;name = na;
	noofStds++;

}
CStudent::~CStudent()
{
	noofStds--;
}
int CStudent::GetTotal()
{
	return noofStds;
}
void CStudent::Print()
{
	cout<<"xingming"<<name<<","<<"xuehao"<<id<<endl;
}
int CStudent::noofStds = 0;
void func();
int main()
{

	cout<<"the number of students is "<<CStudent::GetTotal()<<endl;
	CStudent s1(11101,"zhangsan");
	s1.Print();
	cout<<"the number of student is "<<CStudent::GetTotal()<<endl;
	CStudent s2(11102,"lisi");
	s2.Print();
	cout<<"the number of student is "<<CStudent::GetTotal()<<endl;
	func();
	cout<<"xuesheng shu wei"<<CStudent::GetTotal()<<endl;
	return 0;
}

void func()
{
	CStudent s3(11103,"wangwu");
	s3.Print();
	cout<<"xue sheng shu wei"<<CStudent::GetTotal()<<endl;
}