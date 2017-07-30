#include <iostream>
using namespace std;
void swap(int * ,int *);
int main(){
	int a,b;
	cout<<"Please enter 2 numbers !!";
	cin>>a>>b;
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	swap(&a,&b);
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	return 0;
}
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}