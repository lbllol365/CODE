#include <iostream>
#include <string>
#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee():Employee(),wage_rate(0),hours(0)
{}
HourlyEmployee::HourlyEmployee(string the_name,string the_rate),hours(the_hours)
{}
double HourlyEmployee::get_rate() const
{
	return wage_rate;
}
double HourlyEmployee::get_hours() const
{
	return hours;
}
void HourlyEmployee::set_rate(double new_wage_rate)
{
	wage_rate = new_wage_rate;
}
void HourlyEmployee::set_hours(double new_hours)
{
	hours = new_hours;
}
void HourlyEmployee::print_check()
{
	set_net_pay(hours * wage_rate);
	cout<<"\n_____________________________________________\n";
	cout<<"Pay to the order of"<<get_name()<<endl;
	cout<<"The sum of "<<get_net_pay()<<"Yuan";
	cout<<"\n_____________________________________________\n";
	cout<<"Check stub:NOT NEGOTIABLE\n";
	cout<<"Employee Number:"<<get_ssn()<<endl;
	cout<<"Hourly Employee.\nHour Worked:"<<hours;
	cout<<"Rate:"<<wage_rate<<"Pay:"<<get_net_pay();
	cout<<"\n_____________________________________________\n";
}