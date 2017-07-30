#include <iostream>
using namespace std;
int f(int a[],int n,int *m){
	int min,max;
	min = max = a[0];
	for(int i = 0;i<n;i++){
		if(min>a[i]) min = a[i];
		if(max<a[i]) max = a[i];
	}
	*m = max;
	return min;
}
int main(){
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	int m1,m2;
	m1 = f(b,10,&m2);
	cout<<"the max is "<<m2<<"the min is "<<m1<<endl;
	return 0;
}