#include <iostream>
using namespace std;
double toyal_cost(int number_par,double price_par);

int main(){
	double price,bill;
	int number;
	cout<<"Please enter a number of item purchased:";
	cin>>number;
	cout<<"Enter the price per item ";
	cin>>price;
	bill = toyal_cost(number,price);
	cout<<number<<"item at "<<price
		<<"yuan each. \n"
		<<"Final bill is "<<bill
		<<"yuan "<<endl;
	return 0 ;

}
double toyal_cost(int number_par,double price_par){

	double subtotal;
	subtotal = number_par * price_par;
	return subtotal;
}