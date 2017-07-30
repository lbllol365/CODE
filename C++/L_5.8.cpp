#include <iostream>
using namespace std;
int main(){
	const int n=3,m=4;
	int j,i,maxj,max,a[n][m] = {1,2,3,4,5,6,7,8,9,10,11,12};
	bool flag;
	for(i=0;i<n;i++){
		max = a[i][0];maxj=0;
		for(j=0;j<m;j++)
		if(a[i][j] > max){
			max = a[i][j];
			maxj = j;
		}
		for(int k=0;k<n;k++)
			if(max>a[k][maxj]){
				flag = false;
				break;
			}
		if(flag){
			cout<<"andian["<<i<<"]["<<"["<<maxj<<"]="<<max<<endl;
			break;
		}
		}
		if(!flag)
			cout<<"andian bu cun zai "<<endl;

	return 0;
}