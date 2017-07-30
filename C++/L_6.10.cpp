#include <iostream>
using namespace std;
int main(){
	char *p;
	p = &"language";
	cout<<p<<endl;
	for(int i=0;i<=7;i++){
		cout<<*p;
		p++;
	}
	return 0;
}