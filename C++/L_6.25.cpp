#include <iostream>
using namespace std;
void max_min(int *p,int n,int &max,int &min);
int main(){
	int a[10];
	int ma,mi;
	for(int i=0;i<10;i++)
		cin>>a[i];
	max_min(a,10,ma,mi);
	cout<<ma<<'\t'<<mi<<endl;
	return 0;

}
void max_min(int *p,int n,int &max,int &min){
	int i  = 0;
	max = *(p+i);
	min = *(p+i);
	for(i = 1;i<n;i++){
		if(max<*(p+i))
			max = *(p+i);
		if(min>*(p+i))
			min = *(p+i);
	}
}