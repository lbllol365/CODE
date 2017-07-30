#include <iostream>
using namespace std;
int main(){
	int a,b;
	int *p1,*p2,*p;
	a = 5;
	b = 6;
	p1 = &a;
	p2 = &b;
	if(a>b) {p=p1;p1=p2;p2=p;}
	cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<endl;
	cout<<"max = "<<*p2<<'\t'<<"min = "<<*p1<<endl;
	return 0;
}