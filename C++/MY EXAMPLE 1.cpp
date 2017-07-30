#include <iostream>
using namespace std;
int main(){
	char *p;
	p = "asdfgghjjj";
	cout<<p<<endl;
	while(*p++ != '\0')
		cout<<*p<<endl;
	--p;
	
	do{
		cout<<*p<<endl;
		p--;
	}while(*p != '\0');
	return 0;
}