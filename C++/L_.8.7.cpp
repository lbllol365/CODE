#include <iostream>
using namespace std;
class CTeacher
{
public:
	CTeacher(char *n,int a){
		name = new char[strlen(n) + 1];
		age = a;
		cout<<"zhixing function "<<endl;
	}
	~CTeacher(){
		delete name;
		cout<<"zhixing xingou function "<<endl;
	}
	void show(){
		cout<<"xingming: "<<name<<",age:"<<age<<endl;
	}
private:
	char *name;
	int age;
}
int main(){
	CTeacher T!("wangyong ",35);
	T1.show();
	return 0;
}