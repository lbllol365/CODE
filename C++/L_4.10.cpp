#include <iostream>
using namespace std;
int gcdi(int x,int y){
	if(y==0) return x;
	else return gcdi(y,x%y);
}
int main(){
	int a,b,g;
	cout<<"Please enter 2 numbers!!"<<endl;
	cin>>a>>b;
	g = gcdi(a,b);
	cout<<"the max gong yue shu is"<<g<<endl;
}