#include <iostream>
#include <string>
using namespace std;
class CDate
{
public:
	CDate(int y=1985,int m=1,int d=1)
	{
		year = y;month = m;day = d;
		cout<<"riqi gouzao"<<endl;
	}
	CDate(CDate &s)
	{
		year = s.year;month = s.month;day = s.day;
		cout<<"riqi kaobei gouxi"<<endl;
	}
	~CDate()
	{
		cout<<"riqi gouxi"<<endl;
	}
private:
	int year,month,day;
};

class CStudentID
{
public:
	CStudentID(int i)
	{
		value = i;
		cout<<"gouzao xuehao"<<value<<endl;
	}
	~CStudentID(){
		cout<<"gouxi xuehao"<<value<<endl;
	}
private:
	int value;
};
class CStudent
{
public:
	CStudent(string,char,int,CDate&);
	~CStudent();
private:
	string name;
	char sex;
	CStudentID id;
	CDate birthday;	
};
CStudent::CStudent(string na,char s,int i,CDate &d):id(i),birthday(d)
{
	name = na;
	sex = s;
	cout<<"diao yong xue sheng "<<name<<"gou zao han shu "<<endl;
}
CStudent::~CStudent(){
	cout<<"diaoyong xuesheng "<<name<<"xigou hanshu"<<endl;
}
int main(){
	CDate day1(1939,3,1);
	CStudent stud1("zhangsan",'m',201102,day1);
	return 0;
}

