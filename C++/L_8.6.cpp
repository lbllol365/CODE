#include <iostream>
using namespace std;
class BankAccount
{
public:
	BankAccount(int yuan,int jiao,int fen,double rate);
	BankAccount(double balance,double rate);
	BankAccount();
	void update();
	double get_balance();
	double get_rate();
	void output();
private:
	double balance;
	double interest_rate;
	double fraction(double percent);
};
int main(){
	BankAccount account1(100.80,2.3),account2;
	cout<<"account1 initialized as follows:\n";
	account1.output();
	cout<<"account2 initialized as follows: \n";
	account2.output();
	account1 = BankAccount(211,6,5,5.0);
	cout<<"account1 reset to the following:\n";
	account1.output();
	return 0;
}
BankAccount::BankAccount(int yuan,int jiao,int fen,double rate){
	if((yuan<0)||(jiao<0)||(fen<0)||(rate<0))
	{
		cout<<"Illeagal values for money or interest rate. \n";
		exit(1);
	}
	balance = yuan + 0.1*jiao+0.01*fen;
	interest_rate = rate;
}
BankAccount::BankAccount(double new_balance,double rate)
{
	if((new_balance<0)||(rate<0))
	{
		cout<<"Illeagal values for money or interest rate. \n";
		exit(1);
	}
	balance = new_balance;
	interest_rate = rate;
}
BankAccount::BankAccount() : balance(0),interest_rate(0.0)
{
}
double BankAccount::fraction(double percent_value){
	return percent_value /100.0;
}
void BankAccount::update(){
	balance = balance+ fraction(interest_rate)*balance;
}
void BankAccount::output(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Accout balance"<<balance<<endl;
	cout<<"Interest rate "<<interest_rate<<"%"<<endl;
}