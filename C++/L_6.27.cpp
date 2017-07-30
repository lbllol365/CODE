#include <iostream>
using namespace std;
int main(){
	char a[20] = "I love you!!";
	char b[20] = "\0";
	int i,j=0;
	cout<<"Please enter a start address!";
	cin>>i;
	while(a[i] != '\0'){
		b[j] = a[i];
		j++;
		i++; 
	}

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}