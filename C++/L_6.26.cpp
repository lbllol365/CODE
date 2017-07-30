#include <iostream>
using namespace std;
float temp;
float fn1(float r);
float& fn2(float r);
float fn1(float r){
	temp = (float)(r*r*3.14);
	return temp;
} 
float& fn2(float r){
	temp = (float) (r*r*3.14);
	return temp;
}
int main(){
	float &b;
	float a = fn1(10.0);
	b = &fn1(10.0);
	float c = fn2(10.0);
	float &d = fn2(10.0);
	cout<<a<<c<<d;
	return 0;
}