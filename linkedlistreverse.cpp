#include<iostream>
using namespace std;

struct node{
    int head;
    node* next;
    
    node(int data){
        head=data;
        next=nullptr;
    }

};

node* reverse(node* head){
    node* curr=head;
    node* prev=nullptr;
    node* next;

    while(curr!=nullptr){

        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

void print(node* head){
    while(head!=nullptr){
        cout<<"->"<<head->head;
        head=head->next;
    }
}
int main(){

    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);

    head=reverse(head);
    print(head);
    


}