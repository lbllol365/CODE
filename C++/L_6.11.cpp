#include <iostream>
using namespace std;
int main(){
	char *p,s[10];
	int n=0;
	p=s;
	cout<<"Please enter 8X number!!";
	cin>>p;
	while(*p != '\0'){
		n= n * 8 + *p - '0';
		p++;
	}
	cout<<n<<endl;
	return 0;
	
}