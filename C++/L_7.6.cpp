#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	enum people {zhao,wang,zhang,li,chi};
	people day[31],j;
	int i;
	j = zhang;
	for(i =1;i<=30;i++){
		day[i] = j;
		j = (enum people) (j+1);
		if(j>chi) j = zhao;

	}
	for(i=1;i<=30;i++){
		switch (day[i]){
			case zhao: cout<<setw(4)<<i<<':'<<setw(6)<<"zhao";break;
			case wang : cout<<setw(4)<<i<<':'<<setw(6)<<"wang";break;
			case zhang: cout<<setw(4)<<i<<setw(6)<<"wang";break;
			case li:cout<<setw(4)<<i<<':'<<setw(6)<<"zhang";break;
			case chi:cout<<setw(4)<<i<<':'<<setw(6)<<"chi";break;
			default :break;
		}
		if(i%6 == 0) cout<<endl;
		
	}
	return 0;
}