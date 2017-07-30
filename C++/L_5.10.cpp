#include <iostream>
using namespace std;
int main(){
	char city[80];
	char state[80];
	cin.getline(city,80,',');
	cin.getline(state,80,'\n');
	cout<<"City :"<<city<<"    State : "<<state<<endl;
	return 0;
}