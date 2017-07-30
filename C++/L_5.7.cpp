#include <iostream>
using namespace std;
int main(){
	float a[3][3],sum = 0;
	int i,j;
	cout<<"Please input rectangle element:\n";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
	for(i=0;i<3;i++)
		sum = sum + a[i][i]+a[i][2-i];
	cout<<"dui jiao xian zhi he :"<<sum;
	return 0;
}