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

int depth(tree* root){
	
	if(root==NULL){
		return 0;
	}
	
	int leftheight=depth(root->left);
	int rightheight=depth(root->right);
	
	return max(leftheight,rightheight)+1;
}

int main(){
	tree* node =new tree(1);
	node->left=new tree(2);
	node->right=new tree(3);
	node->left->left=new tree(4);
	node->right->right=new tree(5);
	node->left->right=new tree(6);
	node->right->left=new tree(7);
	
	cout<<depth(node);
}
