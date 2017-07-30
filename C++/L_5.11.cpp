#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int l,index,a[27];
	char s[100],letter;
	for(int i =1;i<=26;i++) a[i] = 0;

	cout<<"Please enter a word!!"<<endl;
	cin>>s;
	l = strlen(s);
	for(i=0;i<l;i++){
		letter = s[i];
		if(letter>='A' && letter <='Z')
		{
			index = letter - 64;
			a[index] = a[index] + 1;

		}
		if(letter>='a' && letter<='z'){
			index = letter - 96;
			a[index] = a[index] + 1;
		}
	}
	cout<<"letter "<<'\t'<<"chu xian ci shu "<<endl;
	for(i=1;i<=26;i++)
		cout<<char(64 + i)<<'\t'<<a[i]<<endl;
	return 0;
}