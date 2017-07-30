#include <iostream>
using namespace std;
int main(){
	
	char *pc[3] = {"ok1","ok2","ok3"};
	for(int i=0;i<3;i++){
		cout<<"pc["<<i<<"]="<<pc[i]<<endl;
	}
	return 0;
}