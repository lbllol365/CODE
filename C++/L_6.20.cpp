#include <iostream>
using namespace std;
void copy_string(char *from,char *to){
	for(;*from!='\0';from++,to++)
		*to = *from;
	*to = '\0';
}
int main(){
	char a[20] = "c language";
	char b[20];
	copy_string(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}