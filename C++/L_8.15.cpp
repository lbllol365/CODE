#include <iostream>
#include <cmath>
using namespace std;
class CPoint
{
public:
	CPoint(int x=0,int y=0);
	double GetX();
	double GetY();
	friend double GetDistance(CPoint start,CPoint end);
private:
	double X,Y;
};
CPoint::CPoint(int x,int y)
{
	X = x;Y = y;
}
double CPoint::GetX()
{
	return X;
}
double CPoint::GetY()
{
	return Y;
}
double GetDistance(CPoint start,CPoint end)
{
	double d;
	d = sqrt((start.X-end.X)*(start.X-end.X)+(start.Y - end.Y)*(start.Y-end.Y));
	return d;
}
int main()
{
	CPoint p1(1,1),p2(4,5);
	double d;
	d = GetDistance(p1,p2);
	cout<<"the distance of two points is "<<d<<endl;
	return 0;
}