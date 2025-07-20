#include<iostream>
using namespace std;

struct tree{
	
	tree* left;
	tree* right;
	int root;
	
	tree(int head){
		head=root;
		right=NULL;
		left=NULL;
	}
};

bool mirror(tree* root1,tree* root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1==NULL && root2==NULL){
		return false;
	}
	
	return (root1->root==root2->root) && mirror(root1->left,root2->right) && mirror(root1->right,root2->left);
}


int main(){
	tree* node1 =new tree(1);
	node1->left=new tree(2);
	node1->right=new tree(3);
	node1->left->left=new tree(4);
	node1->right->right=new tree(5);
	node1->left->right=new tree(6);
	node1->right->left=new tree(7);
	
	tree* node2 =new tree(1);
	node2->left=new tree(3);
	node2->right=new tree(2);
	node2->left->left=new tree(5);
	node2->right->right=new tree(4);
	node2->left->right=new tree(7);
	node2->right->left=new tree(6);
	
	
	
	if(mirror(node1,node2)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
