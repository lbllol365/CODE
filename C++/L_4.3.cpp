#include <iostream>
using namespace std;
int sct(int m,int n){
	int temp,a,b;
	if(m<n){
		temp = m ;
		m = n;
		n = temp;
	}
	a = m;
	b = n;
	while(b!=0){
		temp = a%b;
		a = b;
		b = temp;
	}
	return (m*n/a);
}

int main(){
	int x,y,z;
	cout<<"Please enter 2 numbers !!"<<endl;
	cin>>x>>y;
	z = sct(x,y);
	cout<<"zui xiao gong bei shu is "<<z<<endl;
	return 0;
}