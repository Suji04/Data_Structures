#include <bits/stdc++.h>
using namespace std;

struct treeNode{
	int data;
	treeNode *left, *right;
	treeNode(int data){
		this->data=data;
		left=right=NULL;
	}
};

void postOrder(treeNode *current_node){
	if (current_node==NULL) return;
	postOrder(current_node->left);
	postOrder(current_node->right);
	cout<<current_node->data<<" ";
}

void preOrder(treeNode *current_node){
	if(current_node==NULL) return;
	cout<<current_node->data<<" ";
	preOrder(current_node->left);
	preOrder(current_node->right);
}

void inOrder(treeNode *current_node){
	if(current_node==NULL) return;
	inOrder(current_node->left);
	cout<<current_node->data<<" ";
	inOrder(current_node->right);
}

int main(){
	treeNode *root=new treeNode(1);
	root->left=new treeNode(2);
	root->right=new treeNode(3);
	root->left->right=new treeNode(4);
	root->left->left=new treeNode(5);
	postOrder(root);
	cout<<endl;
	preOrder(root);
	cout<<endl;
	inOrder(root);
	return 0;
}