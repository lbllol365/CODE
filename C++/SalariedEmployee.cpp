#include <iostream>
#include <string>
using namespace std;
#include "SalariedEmployee.h"
SalariedEmployee::SalariedEmployee():Employee(),salary(0)
{}
SalariedEmployee::SalariedEmployee(string the_name,string the_ssn,double the_salary):Employee(the_name,the_ssn),salary(the_salary)
{}
double SalariedEmployee::get_salary() const
{
	return salary;
}
void SalariedEmployee::set_salary(double new_salary)
{
	salary = new_salary;
}
void SalariedEmployee::print_check()
{
	set_net_pay(salary);
	cout<<"\n________________________________\n";
	cout<<"Pay to the order of"<<get_name()<<endl;
	cout<<"The sum of "<<get_net_pay()<<"yuan\n";
	cout<<"\n________________________________\n";
	cout<<"Check stub:NOT NEGOTIABLE\n";
	cout<<"Employee number:"<<get_ssn()<<endl;
	cout<<"SalariedEmployee.Regulat pay:"<<salary<<endl;
	cout<<"\n________________________________\n";
}