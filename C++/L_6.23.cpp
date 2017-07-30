#include <iostream>
using namespace std;
int* findmax(int *array, int size,int *index);
int main(){
	int a[10] = {33,91,54,67,82,137,85,63,19,68};
	int *maxaddr;
	int idx;
	maxaddr = findmax(a,sizeof(a)/sizeof(*a),&idx);
	cout<<"the max number is "<<idx<<endl;
	cout<<"the address of the max number is "<<maxaddr<<endl;
	cout<<"the max number is is "<<a[idx]<<endl;
	return 0;
}
int* findmax(int *array,int size,int *index){
	int max,i;
	max = *(array+0);
	for(i = 1;i<size;i++){
		if(max<*(array+i)){
		max = *(array+i);
		*index = i;
		}
	}
	return (array+ *index);
}