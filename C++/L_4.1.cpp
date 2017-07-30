
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main(){
	const double con = 10.50;
	double buget,area,length_side;
	cout<<"Please enter a buget for the dog house!"<<endl;
	cin>>buget;
	area = buget / con;
	length_side = sqrt(area);
	cout<<"For a price  of "<<buget<<endl
		<<"can build a square dog house \n"
		<<"that is "<<length_side
		<<" mile on each side \n";
	int ok,k;
	cout<<"Please enter a number !!"<<endl;
	cin>>ok;
	k = pow(ok,3);
	cout<<k<<endl;
	return 0 ;
	
}