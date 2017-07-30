#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int i,n,sum=0;
	cout<<"PLease enter the length of zu";
	cin>>n;
	int *p = new int [n];
	if(p==NULL){
		cout<<"Mission Failed!";
		exit(1);
	}
	cout<<"Please enter n is number !";
	for(i=0;i<n;i++){
		cin>>p[i];

	}
	for(i=0;i<n;i++)
		sum += p[i];
	cout<<"sum = "<<sum<<endl;
	delete [n]p;
	return 0;
}