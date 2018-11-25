#include <stdio.h>
#include <stdlib.h> 
#define pf(d,x) printf("%d ",x)
#define nl printf("\n")

typedef struct node{
	int data;
	struct node* next;
}node;

void push(node** root, int data){
	node* t = (node*)malloc(sizeof(node));
	t->data=data;
	t->next=NULL;
	if(*root==NULL) *root=t;
	else{
		node* l = *root;
		while(l->next!=NULL){
			l=l->next;
		}
		l->next=t;
	}
}

void pop(node** root){
	node* t=*root;
	*root=t->next;
	free(t);
}

void display(node* root){
	while(root!=NULL){
		pf(d,root->data);
		root=root->next;
	}
	nl;
}

int main(){
	node* root = NULL;
	push(&root,100);
	push(&root,100);
	display(root);
	pop(&root);
	display(root);
	return 0;
}
