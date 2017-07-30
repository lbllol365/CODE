#include <iostream>
using namespace std;
int main(){
	int f[20] = {1,1};
	cout<<f[0]<<endl;
	cout<<f[1]<<endl;
	for(int i=2;i<20;i++){
		f[i] = f[i-1] + f[i-2];
		cout<<f[i]<<endl;
	}
	return 0;
}