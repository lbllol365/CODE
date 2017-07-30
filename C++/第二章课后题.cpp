#include <iostream>
#include <iomanip.h>


int main(){
	int i,j,m,n;
	i = 8;
	j = 10;
	m = ++i + j++;
	n = (++i) + (++j) + m;
	cout<<i<<'\t'<<j<<'\t'<<m<<'\t'<<n<<endl;
	
	//question 2.6.3

	int a,b,sum,cha,ji;
	cout<<"Please enter 2  numbers !!"<<endl;
	cin>>a>>b;
	sum = a + b;
	cha = a - b;
	ji = a * b;
	cout<<"sum is "<<sum<<endl<<"cha is "<<cha<<endl<<"ji is "<<ji<<endl;
	//question  2.6.4

	int a1,a2;
	int ping1,ping2,li1,li2;
	cout<<"Please enter 2 numbers !!"<<endl;
	cin>>a1>>a2;
	ping1 = a1 * a1;
	ping2 = a2 * a2;
	li1 = a1 * a1 * a1;
	li2 = a2 * a2 * a2;
	cout<<"a1's ping is  "<<ping1<<endl<<"a2's ping is "<<ping2<<endl;
	cout<<"a1's li is"<<li1<<endl<<"a2's li is "<<li2<<endl;
	//qusetion 2.6.5

	int ok;
	char c1;
	cout<<"Please enter 1 number !!"<<endl;
	cin>>ok;
	c1 = char(ok);
	cout<<"The char is "<<c1<<endl;
	//question 2.6.6

	int huashi;
	double sheshi;
	cout<<"Please enter 1 huashiwendu !!!"<<endl;
	cin>>huashi;
	sheshi = (huashi - 32.0) * 5.0 / 9.0;
	cout<<"jing zhuan huan hou de wen du shi "<<sheshi<<endl;
	//question 2.6.7


}