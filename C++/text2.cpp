#include <iostream>
#include <iomanip.h>


int main(){
	const double PI=3.1415926;
	double r=6.779,c,s;
	c = 2 * PI * r;
	s = PI * r * r;
	cout<<"zhouchang(zhishuxiangshi)"<<setiosflags(ios::scientific)<<c<<endl;
	cout<<"mianji(zhishuxiangshi)"<<setiosflags(ios::scientific)<<s<<endl;


	cout<<"zhouchang(xiaoshuxingshi)"<<setiosflags(ios::fixed)<<c<<endl;
	cout<<"mianji(xiaoshuxingshi)"<<setiosflags(ios::fixed)<<s<<endl;
}