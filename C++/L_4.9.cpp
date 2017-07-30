#include <iostream>
using namespace std;
void conv(int x){
	if(x<10){
		cout<<x<<endl;
		return;
	}
	cout<<x % 10;
	conv(x/10);

}
int main(){
	int t;
	cout<<"Please enter a number !!"<<endl;
	cin>>t;
	conv(t);
	return 0;
}