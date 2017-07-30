#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <string>
#include "employee.h"
using namespace std;

class HourlyEmployee:public Empolyee
{
public:
	HourlyEmployee();
	HourlyEmployee(string the_name,string the_ssn,double the_wage_rate,double the_hours);
	double get_rate() const;
	double get_hour() const;
	void set_rate(double);
	void set_hours(double);
	void print_check();
private:
	double wage_rate;
	double hours;
};
#endif


