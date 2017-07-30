#include <iostream>
using namespace std;
class DayofYear{
public:
	void input();
	void output();
	void set(int new_month,int new_day);
	int get_month();
	int get_day();
private:
	void check_date();
	int month;
	int day;

};
int main(){
	DayofYear today,birthday;
	cout<<"Enter today's date:\n";
	today.input();
	cout<<"Today's date is";
	today.output();
	birthday.set(11,12);
	cout<<"Your birthday date is";
	birthday.output();

	if(today.get_month() == birthday.get_month()&&today.get_day()==birthday.get_day())
		cout<<"Happy birthday!!\n";
	else
		cout<<"Happy unbirthday!\n";
	return 0;
}
void DayofYear::output(){
	cout<<"month= "<<month<<", day="<<day<<endl;
}
void DayofYear::check_date(){
	if((month<1)||(month>12)||(day<1)||(day>31)){
		cout<<"Illeagal date .Aborting program.\n";
		exit(1);
	}
}
int DayofYear::get_month(){
	return month;
}
int DayofYear::get_day(){
	return day;
}
void DayofYear::set(int new_month,int new_day){
	month = new_month;
	day = new_day;
	check_date();
}
void DayofYear::input(){
	cout<<"Enter month as a number !";
	cin>>month;
	cout<<"Enter the day of the month:";
	cin>>day;
	check_date();
}
