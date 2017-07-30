#include <iostream>
using namespace std;
class  DayofYear{
public:
	void output();
	int month;
	int day;
};
int main(){
	DayofYear today,birthday;
	cout<<"Please enter a data: \n";
	cout<<"Enter month as a number :";
	cin>>today.month;
	cout<<"Enter the day of the month:";
	cin>>today.day;
	cout<<"Enter a your birthday:\n";
	cout<<"Enternonth as a number :";
	cin>>birthday.month;
	cout<<"Enter the day of the month:";
	cin>>birthday.day;
	cout<<"Today's date is ";
	today.output();
	cout<<"Your birthday is";
	birthday.output();
	if(today.month==birthday.month && today.day == birthday.day)
		cout<<"Happy birthday!!";
	else 
		cout<<"Happy unbirthday!!";
	return 0;

}
void DayofYear::output(){
	cout<<"month = "<<month<<", day = "<<day<<endl;
}