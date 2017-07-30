#include <iostream>
using namespace std;
double per_area_price(int a,double per_price);

int main(){
	int small_area,large_area;
	double small_price,large_price,un_sml_price,un_lar_price;
	cout<<"Please enter the small one's area !!"<<endl;
	cin>>small_area;
	cout<<"Please enter the small one's price!!"<<endl;
	cin>>small_price;
	cout<<"Please enter the large one's area!!"<<endl;
	cin>>large_area;
	cout<<"Please enter the large one's price  !!"<<endl;
	cin>>large_price;
	un_lar_price = per_area_price(large_area,large_price);
	un_sml_price = per_area_price(small_area,small_price);
	if(un_sml_price<un_lar_price) cout<<"Choose the small one !!!"<<endl;
	else if(un_sml_price>un_lar_price) cout<<"Choose the large one!!"<<endl;
	else cout<<"OK,You can choose one of them!!"<<endl;
	return 0;


}
double per_area_price(int a,double per_price){
	double price_per;
	price_per = a / per_price;
	return price_per;
}