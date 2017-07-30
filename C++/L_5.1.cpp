#include <iostream>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		a[i] = i * i;
	}
	cout<<"xia biao "<<'\t'<<"shuzhi "<<endl;
	for(i=0;i<10;i++){
		cout<<i<<'\t'<<a[i]<<endl;
	}
}