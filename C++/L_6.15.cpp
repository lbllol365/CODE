#include <iostream>
using namespace std;
int main(){
	char *p,*q;
	cout<<"Please enter a char:";
	q = new char[100];
	cin.getline(q,100);
	cout<<"ni xiang zi chuan wei :";
	p = q;
	while(*p++ != '\0');
	p--;
	do
	{
		cout<<*p;
		p--;

	}while(q<=p);
	return 0;
}