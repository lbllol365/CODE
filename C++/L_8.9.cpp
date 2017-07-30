#include <iostream>
using namespace std;
class CClass
{
public:
	CClass(char *cName = "",int sum=0);
	CClass(CClass &p)
	{
		pname = new char[strlen(p.pname)+1];
		if(pname != 0)
			strcpy(pname,p.pname);
		num = p.num;
		cout<<"create the new class"<<pname<<endl;
	}
	~CClass()
	{
		cout<<"xigou: "<<pname<<endl;
		delete pname;
	}
	void Print();
private:
	char *pname;
	int num;
};
CClass::CClass(char *cName,int snum)
{
	int length = strlen(cName);
	pname = new char[length+1];
	if(pname !=0)
		strcpy(pname,cName);
	num = snum;
	cout<<"create the class:"<<pname<<endl;
}
void CClass::Print()
{
	cout<<pname<<"'s people is "<<num<<endl;
}
int main(){
	CClass c1("computer 111 class",56);
	CClass c2(c1);
	c1.Print();
	c2.Print();
	return 0;
}