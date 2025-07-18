#include<iostream>
using namespace std;

struct node{
	node* next;
	int head;
	
	node(int data){
		head=data;
		next=NULL;
	}
};   

node* mergelink(node* head1, node* head2){
	if(head1->next==NULL){
		return head2;
	}
	if(head2->next==NULL){
		return head1;
	}
	
	if(head1->head<=head2->head){
		head1->next=mergelink(head1->next,head2);
	}
	else{
			head2->next=mergelink(head2->next,head1);
	}
}     

void print (node* head){
	while(head!=NULL){
		cout<<"->"<<head->head;
		head=head->next;
	}
}                   

int main(){
	node* head1=new node(1);
	head1->next=new node(2);
	head1->next->next=new node(3);
	head1->next->next->next=new node(4);
	head1->next->next->next->next=new node(5);
	
	node* head2=new node(5);
	head2->next=new node(6);
	head2->next->next=new node(7);
	head2->next->next->next=new node(9);
	
	
	
	node* head=mergelink(head1,head2);
	print(head);
}
