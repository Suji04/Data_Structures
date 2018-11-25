#include <stdio.h>
#include <stdlib.h> 
#define pf(d,x) printf("%d ",x)
#define nl printf("\n")

typedef struct node{
	int val;
	struct node *left, *right;
}node;

node* create(int val){
	node* t = (node*)malloc(sizeof(node));
	t->val=val;
	t->left=t->right=NULL;
	return t;
}

node* insert(node* root, int val){
	if(root==NULL) return create(val);
	else{
		if(root->val<val) root->right=insert(root->right,val);
		else root->left=insert(root->left,val);
	}
	return root;
}

void search(node* root, int key){
	if(root==NULL){
		printf("not found \n");
		return;
	} 
	if(root->val==key){
		printf("found \n");
		return;
	}
	if(key>root->val) search(root->right,key);
	else search(root->left,key);
}

void inorder(node* root){
		if(root==NULL) return;
		inorder(root->left);
		pf(d,root->val);
		inorder(root->right);
}

int main(){
	node *root = NULL; 
	root=insert(root, 50); 
	root=insert(root, 30); 
	root=insert(root, 20); 
	root=insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 
	inorder(root);
	nl;
	search(root,9);
	search(root,70);
	return 0;
}
