#include <iostream>
#include <cmath>
using namespace std;
double f1(double x){return (1+x);}
double f2(double x){return (x/(1+x*x));}
double f3(double x){return x/(1+cos(x)+x*x);}
int main(){
	double y1,y2,y3;
	double (*pf)(double x);
	pf = f1;
	y1 = pf(1);
	pf = f2;
	y2 = pf(1);
	pf = f3;
	y3 = pf(1);
	cout<<"y1 = "<<y1<<"y2 = "<<y2<<"y3 = "<<y3<<endl;
	return 0;
}