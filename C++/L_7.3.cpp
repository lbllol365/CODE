#include <iostream>
using namespace std;
struct person
{
	char name[10];
	bool sex;
	int age;
	float salary;
};
person a[4] = {{"liming",true,22,380},{"wangqiang",true,34,560},
			{"liugang",true,28,450},{"wangpeng",false,26,480}};
void output(int n){
	cout<<"xianshijuyou person jiegoude"<<n<<"ge jilu"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i].name<<' ';
		if(a[i].sex == true)
			cout<<"man"<<' ';
		else 
			cout<<"woman"<<' ';
		cout<<a[i].age<<' '<<a[i].salary<<endl;
	}
}
void find(int n){
	int k = 0;
	float x = a[0].salary;
	for(int i=1;i<n;i++){
		if(a[i].salary>x){
			x = a[i].salary;
			k = i;
		}
	}
	cout<<"xianshishuzuazhongjuyouzuigaogongzizhiderenyuanxinxi:"<<endl;
	cout<<a[k].name<<' ';
	if(a[k].sex == true)
		cout<<"man"<<' ';
	else 
		cout<<"woman"<<' ';
	cout<<' '<<a[k].age<<' '<<a[k].salary<<endl;

}
int main(){
	output(4);
	find(4);
	return 0;
}