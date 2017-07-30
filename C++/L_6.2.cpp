#include <iostream>
using namespace std;
int main(){

	int i1,i2;
	int *p1,*p2;
	i1 = 5;
	p1 = &i1;
	i2 = *p1/2 + 10;
	p2 = p1;
	p1 = &i2;
	cout<<i1<<'\t'<<i2<<'\t'<<*p1<<'\t'<<*p2<<endl;
	return 0;
	 }
