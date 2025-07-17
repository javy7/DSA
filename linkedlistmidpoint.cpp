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

int  mid(node* head){
    node* slow=head;
    node* fast=head;

    while(fast && slow ){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    return slow->head;
}

int main(){
      node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);

    cout<<"Mid point is:"<<mid(head);
    
}