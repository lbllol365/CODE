#include <iostream>
using namespace std;
void f(){
	int x = 0;
	static int y = 3;
	x = x + 1;
	y = y + 1;
	cout<<x<<'\t'<<y<<endl;

}
int main(){
	int i;
	for(i=0;i<3;i++){
		f();
	}
	return 0;
}