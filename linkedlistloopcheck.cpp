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

bool loop(node* head){
    node* slow=head;
    node* fast=head;

    while(fast && slow ){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
      node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);

    if(loop(head)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}