#include <iostream>
#include <cstdlib>
#include <ctime>
const int n = 10;
using namespace std;
int main(){
	int a[n+1],i,j,t;
	cout<<"yuan shi shu ju ru xia :"<<endl;
	srand(time(0));
	for(i=0;i<=n;i++){
		a[i] = rand()%100 +100;
		cout<<a[i]<<"    ";

	}
	for(i=1;i<n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i] < a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	cout<<endl<<"cong max - min is "<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";

	}
	cout<<endl;
	return 0;
}