#include <iostream>
using namespace std;
int main(){
	int i;
	char *pc[3];
	cout<<"Please enter 3 numbers !"<<endl;
	pc[0]= new char[20];
	pc[1] = new char[20];
	pc[2] = new char[20];
	for(i=0;i<3;i++)
		cin>>pc[i];
	for(i=0;i<3;i++)
		cout<<"pc["<<i<<"]="<<pc[i]<<endl;
	return 0;
}