#include <iostream>
#include <cstdlib>
#include <string>
#include "employee.h"
using namespace std;
Employee::Employee():name("NO name yet"),ssn("No number yet"),net_pay(0)
{}
Employee::Employee(string the_name,string the_ssn)
:name(the_name),ssn(the_ssn),net_pay(0)
{}
string Employee::get_name const
{
	return name;
}
string Employee::get_ssn const
{
	return ssn;
}
double Employee::get_net_pay() const
{
	return net_pay;
}
void Employee::set_name(string new_name)
{
	name = new_name;
}
void Employee::set_ssn(string new_ssn)
{
	ssn = new_ssn;
}
void Employee::set_net_pay(double new_net_pay)
{
	net_pay = new_net_pay;
}
void Employee::print_check() const
{
	cout<<"\nERROR:print_check Function Called For An\n"
		<<"Undifferrntiated Employee. Aborting the program.\n"
		<<"Check with the author of the program about this bug.\n";
	exit(1);
}