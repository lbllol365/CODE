#include <iostream>
#include "FindRoot.h"
using namespace std;
int main(){
	CFindRoot obj1,obj2,obj3,*p;
	CFindRoot &obj4 = obj3;
	p = &obj2;
	obj1.SetData(1,3,2);
	obj1.Find();
	obj1.Display();
	p->SetData(1,4,-5);p->Find();p->Display();
	obj4.SetData(1,2,5);obj3.Find();obj3.Display();
	return 0;
}