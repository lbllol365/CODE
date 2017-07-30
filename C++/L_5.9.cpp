#include <iostream>
#include <iomanip>
const int N=5;
const int M=5;
using namespace std;
int main(){
	int s[N][M];
	float sum;
	int i,j;
	cout<<"Input data : \n";
	for(i=0;i<N;i++)
	for(j=0;j<M-1;j++)
		cin>>s[i][j];
	for(i=0;i<N;i++){
		sum = 0.0;
		for(j=1;j<M-1;j++)
			sum = sum + s[i][j];
		s[i][j] = sum / (M-2);
	}
	cout<<setw(5)<<" number"<<" yuwen shuxue yingyu average "<<endl;
	cout<<"______________________________\n";
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
			cout<<setw(6)<<s[i][j];
		cout<<endl;
	}
	cout<<"___________________________________ \n";
	return 0;
}