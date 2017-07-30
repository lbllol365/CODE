#include <iostream>
using namespace std;
int main(){
	int a,b=10;
	int &ra = a;
	a =20;
	cout<<ra<<"\t";
	cout<<&a<<"\t";
	cout<<&ra<<endl;
	ra = b;
	cout<<a<<"\t";
	cout<<ra<<"\t";
	cout<<b<<endl;
	cout<<&a<<"\t";
	cout<<&ra<<"\t";
	cout<<&b<<endl;
	return 0;
}