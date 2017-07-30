#include "iostream"
#include "cmath"
#include "iomanip"

using namespace std;
int min;
int find(){
	int max,x;
	x= rand()%101 +100;
	cout<< setw(4)<<x;
	max =x;min = x;

	for(int i=1;i<10;i++){
		x = rand()%101 +100;
		cout<< setw(4)<<x;
		if(x >max) max = x;
		if(x <min) min = x;

	}
	return max;
}

int main(){
	int m =find();
	cout<<endl<<"the max is "<<m<<",min is "<<min<<endl;
	return 0;
}