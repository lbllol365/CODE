#include <iostream>
using namespace std;
class BankAccount
{
public:
	void set(int yuan,int jiao,int fen,double rate);
	void set(double balance,double rate);
	void update();
	double get_balance();
	double get_rate();
	void output();
private:
	double balance;
	double interest_rate;
	double fraction(double percent);
};

int main()
{
	BankAccount account1,account2;
	cout<<"Start of Test:\n";
	account1.set(123,5,5,3.0);
	cout<<"account1 initial statement:\n";
	account1.output();
	account1.set(213.75,5.0);
	cout<<"account1 with new setup:\n";
	account1.output();
	account1.update();
	cout<<"account1 after update:\n";
	account1.output();
	account2 = account1;
	cout<<"account2:\n";
	account2.output();
	return 0;
}
void BankAccount::set(int yuan,int jiao,int fen,double rate)
{
	if((yuan<0)||(jiao<0)||(fen<0)||(rate<0))
	{
		cout<<"Illegal values for money or interest rate\n";
		exit(1);
	}
	balance = yuan + 0.1*jiao +0.01*fen;
	interest_rate  = rate;
}
void BankAccount::set(double new_balance,double rate)
{
	if((new_balance<0)||(rate<0)){
		cout<<"Illegal values for money or interest rate.\n";
		exit(1);
	}
	balance = new_balance;
	interest_rate = rate;
}
double BankAccount::fraction(double percent_value){
	return percent_value / 100.0;

}
void BankAccount::update(){
	balance = balance + fraction(interest_rate)*balance;
}
void BankAccount::output(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Account balance:"<<balance<<endl;
	cout<<"interest rate"<<interest_rate<<"%"<<endl;
}