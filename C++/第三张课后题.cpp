#include <iostream>
#include <iomanip.h>
#include <cmath>
#include <stdio.h>
double zhuanhuan(double a);
void main(){

	int b12,temp2,v=0,cs=0;
	int op[20];
	cout<<"Please enter 1 number !!"<<endl;
	cin>>b12;
	temp2 = b12;
	for(int y=1;y<=b12;y++){
		if(b12 % y == 0){
			for(;v<=20;v++){
				op[v] = y;
			}
			b12 = b12 / y;
		}
	}
	while(op[cs] != 0){
		printf("%d",op[cs]);
		printf("*");
		cs++;
	}
	//3.7.6.5

	
}