#include <iostream>
using namespace std;

long fac(int n){
	long p;
	if(n==1) return n;
	else p = n*fac(n-1);
	return p;

}
int main(){
	int n;
	cout<<"Please enter 1 number !!"<<endl;
	cin>>n;
	cout<<"n"<<"!="<<fac(n)<<endl;
	return 0 ;
}