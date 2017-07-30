#include <iostream>
using namespace std;
int main(){
	int a[5] = {0,1,2,3,4};
	int *p,*p1;
	int sum=0;
	p = &a[0];
	p1 = &a[4];
	for(;p<=p1;p++){
		sum += *p;
		cout<<"p is "<<*p<<endl;
	}
	cout<<"sum is "<<sum<<endl;
	return 0;

}