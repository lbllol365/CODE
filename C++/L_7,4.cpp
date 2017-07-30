#include <iostream>
#include <cmath>
using namespace std;
struct Rectangle{
	int topleft_x;
	int topleft_y;
	int bottomleft_x;
	int bottomright_y;

};
Rectangle Input(int x1,int y1,int x2，int y2){
	Rectangle tmp;
	tmp.topleft_x = x1;
	tmp.topleft_y = y1;
	tmp.bottomleft_x = x2;
	tmp.bottomright_y = y2;
	return tmp;
}
double GetArea(Rectangle rect){
	return fabs((rect.bottomleft_x-rect.topleft_x) * (rect.bottomright_y - rect.topleft_y));
}
int main(){
	Rectangle rec;
	int tlx,tly,brx,bry;
	cout<<"Please input four numbers of rectangle in the order :"<<endl;
	cout<<"topleft_x topleft_y bottomleft_x bottomright_y "<<endl;
	cin>>tlx>>tly>>brx>>bry；
	rec = Input(tlx,tly,brx,bry);
	cout<<"Area = "<<GetArea(rec)<<endl;
	return 0;
}