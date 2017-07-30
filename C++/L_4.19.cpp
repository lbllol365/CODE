#include "iostream"
using namespace std;
int main(){
	int x = 5,y = 10;
	for(int k = 1;k<=2;k++){
		register int m=0,n=0;
		m = m + 1;
		n = n + x + y;
		cout<<"m = "<<m<<'\t'<<"n= "<<n<<endl;

	}
	return 0;
}