#include <iostream>
#include <string>
using namespace std;
class CStudent
{
public:
	CStudent(string na,int i,int a);
	int GetAge();
private:
	string name;
	int id;
	int age;
};
CStudent::CStudent(string na,int i,int a)
{
	name = na;
	id = i;
	age = a;
}
int CStudent::GetAge()
{
	return age;
}
int main(){
	int sum = 0;
	CStudent s[5] = {
		CStudent("zhangsan",10001,20),
		CStudent("lisi",10002,22),
		CStudent("wangwu",10003,24),
		CStudent("zhaoliu",10004,26),
		CStudent("sunliu",10005,28)
	};
	for(int i = 0;i<5;i++){
		sum += s[i].GetAge();
	}
	cout<<sum/5<<endl;
	return 0;
}