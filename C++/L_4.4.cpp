#include <iostream>
using namespace std;

inline double sqr(double x){
	return x*x;
}
inline double cube(double x){
	return x*x*x;
}

int main(){
	double a,b,c;
	cout<<"Please enter a number !!"<<endl;
	cin>>a;
	b = sqr(a);
	c = cube(a);
	cout<<"sqre the number is "<<b<<endl;
	cout<<"cube the number is "<<c<<endl;

}