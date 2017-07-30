#include <cstdlib>
#include <iostream>
#include <ctime>
const int n =10;
using namespace std;
int main(){
	int a[n+1],i,j,t;
	cout<<"yuanshishuju: "<<endl;
	srand(time(0));
	for(i=1;i<=n;i++){
		a[i] = rand()%100 + 100;
		cout<<a[i] <<"   ";

	}
	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	cout<<endl<<"cong min-max is : "<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	return 0;
}