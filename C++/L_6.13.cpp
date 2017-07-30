#include <iostream>
using namespace std;
int main(){
	char c[5][20] = {"PASCAL","BASIC","VC","DELPHI","VFP"};
	char *s[5],*pc;
	int i,j;
	for(i=0;i<5;i++) s[i]= c[i];
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++)
			if(strcmp(s[i],s[j]) > 0){
			pc = s[i];
			s[i] = s[j];
			s[j] = pc;
		}
	}
	for(i=0;i<5;i++)
		cout<<s[i]<<'\t';
	cout<<endl;
	return 0;

}
