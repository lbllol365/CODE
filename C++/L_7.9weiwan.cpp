#include <iostream>
using namespace std;
struct node{
	int info;
	node *next;
};
int main(){
	node* creatdown{
		node *head,*tail,*p;
		int n=0,data;
		head = NULL;
		cin>>data;

	
	while(data != 0){
		head = new node;
		tail = head;
		head->info = data;
	}
	else{
		p = new node;
		p -> info = data;
		tail->next=p;
		tail = p;
	}
	cin>>data;
	}
	tail->next =NULL;
	return head;
}
