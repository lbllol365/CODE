#include <iostream>
using namespace std;
int main(){
	int  a[6] = {1,2,3,4,5,6};
	int *p;
	p = a;
	for(int i=0;i<6;i++){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}