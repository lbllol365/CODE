#include <iostream>
using namespace std;
void menu_print();
void accout_report();
void marketing_report();
void engineering_report();

int main(){
	int choice;
	do{
		menu_print();
		cin>>choice;
	}while(choice<=0 || choice >=4);
	switch(choice){
		case 1:accout_report();break;
		case 2:marketing_report();break;
		case 3:engineering_report();break;
	}
	return 0;
}
void menu_print(){
	cout<<"1.ji shu report"<<endl;
	cout<<"2.shi chang report"<<endl;
	cout<<"3.gongcheng report"<<endl;
	cout<<"choose a number !!"<<endl;
}
void accout_report(){
	cout<<"accout_report is here!!"<<endl;
}
void marketing_report(){
	cout<<"marketing_report is here!!"<<endl;
}
void engineering_report(){
	cout<<"engineering_report is here !!"<<endl;
}