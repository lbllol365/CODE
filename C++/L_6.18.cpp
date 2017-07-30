#include <iostream>
using namespace std;
int k(int [],int);
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int s;
	s = k(a,10);
	cout<<"sum = "<<s<<endl;
	return 0;
}
int k(int array[],int n){
	int sum = 0;
	int i = 0;
	while(i<n){
		sum += array[i++];
	}
	return sum;
}