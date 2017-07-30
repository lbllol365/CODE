#include <iostream>
#include <cmath>
#include "FindRoot.h"
using namespace std;
void CFindRoot::SetData(float x,float y,float z){
	a=x;b=y;c=z;
	delta = b*b - 4*a*c;
}
void CFindRoot::Find(){
	if(delta>0){
		x1 = (-b+sqrt(delta)/(2*a));
		x2 = (-b-sqrt(delta)/(2*a));
		return;
	}
	else if(delta==0)
	{
		x1 = x2 = (-b)/(2*a);
		return ;
	}
	else
	{
		x1 = (-b)/(2*a);
		x2 = sqrt(-delta) / (2*a);
	}
}

void CFindRoot::Display(){
	if(delta>0){
		cout<<"x1 = "<<x1<<"\nx2="<<x2<<endl;
		return ;
	}
	else
	{
		cout<<"x1 = "<<x1<<"+"<<x2<<"i"<<endl;
		cout<<"x1= "<<x1<<"-"<<x2<<"i"<<endl;
	}
}