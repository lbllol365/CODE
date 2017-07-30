#include <iostream>
#include <cstdlib>
#include <ctime>
const int n = 10;
int k;
using namespace std;
int main(){
	int a[n+1],i,j,t;
	cout<<"yuan shi shu ju :"<<endl;
	srand(time(0));
	for(i=1;i<=n;i++){
		a[i] =rand()%100 + 100;
		cout<<a[i]<<" ";

	}
	for(i=1;i<=n-1;i++){                                               
		k=i;
		for(j=i+1;j<=n;j++)
			if(a[k]<a[j])
				k=j;
		if(k!=i){
			t=a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for(i=1;i<=n;i++){
		cout<<a[i]<<"   ";
	}
	cout<<endl;
	return 0;
}