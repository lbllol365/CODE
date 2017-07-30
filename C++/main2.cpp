#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
void main()
{
	HourlyEmployee wang("wang","11",15,240);
	wang.print_check();
	SalariedEmployee zhang("zhang","12",3000);
	zhang.print_check();
}
