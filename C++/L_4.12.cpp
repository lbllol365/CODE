#include <iostream>
using namespace std;
int max(int a , int b){
	if(a>b)
		return a;
	else 
		return b;
}
float max(float a,float b){
	if(a>b)
		return a;
	else 
		return b;
}
double max(double a ,double b){
	if(a>b)
		return a;
	else 
		return b;
}

int main(){
	int a = 7,b = 8;
	float c = 6,d = 2;
	double e = 23,f = 122;
	cout<<a<<"and "<<b<<"'s max is"
		<<max(a,b)<<endl;
	cout<<c<<"and"<<d<<"'s max is"
		<<max(c,d)<<endl;
	cout<<e<<"and"<<f<<"'s max is"
		<<max(e,f)<<endl;
	return 0;
}