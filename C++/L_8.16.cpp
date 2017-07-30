#include <iostream>
using namespace std;
class CTime
{
public:
	CTime(int h=0,int m=0,int s=0);
	friend class CDates;
private:
	int hour;
	int minute;
	int sec;
};
CTime::CTime(int h,int m,int s)
{
	hour = h;
	minute = m;
	sec = s;
}
class CDates
{
public:
	CDates(int y=1990,int m=1,int d=1,int h=0,int mi=0,int s=0);
	void displayDateandtime();
private:
	int month;
	int day;
	int year;
	CTime t;
};
CDates::CDates(int y,int m,int d,int h,int mi,int s):t(h,mi,s)
{
	month = m;
	day = d;
	year = y;
}
void CDates::displayDateandtime()
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
int main()
{
	CDates d1(2010,12,30,10,13,56);
	d1.displayDateandtime();
	return 0;
}