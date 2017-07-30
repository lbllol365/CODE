#include <iostream>
using namespace std;
class CComplex
{
public:
	CComplex(double,double);
	CComplex(CComplex &c);
	CComplex add(CComplex &x);
	void Print();
private:
	double real;
	double imag;
};
CComplex::CComplex(double r =0.0,double i=0.0)
{
	real =r;
	imag = i;
	cout<<"dianyonglainggegouzaohanshu"<<endl;
}

CComplex::CComplex(CComplex &c)
{
	real = c.real;
	imag = c.imag;
	cout<<"dianyongkaobei gouzao hanshu"<<endl;
}
void CComplex::Print()
{
	cout<<"{"<<real<<","<<imag<<")"<<endl;
}
void f(CComplex n)
{
	cout<<"n=";
	n.Print();
}
CComplex CComplex::add(CComplex &x)
{
	CComplex y(real+x.real,imag+x.imag);
	return y;
}

int main(){
	CComplex a(3.0,4.0),b(5.6,7.9);
	CComplex c(a);
	cout<<"a = ";
	a.Print();
	cout<<"c = ";
	c.Print();
	f(b);
	c = a.add(b);
	c.Print();
	ret,urn 0;
}
