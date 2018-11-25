#include <stdio.h> 
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

void push(node** root, int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data=data;
	newNode->next=NULL;
	if(*root==NULL)*root = newNode;
	else{
		node* last=*root;
		while(last->next!=NULL){
			last=last->next;
		}
		last->next=newNode;
	}
}

void pop(node** root){
	node* t = *root;
	while(t->next->next!=NULL){
		t=t->next;
	}
	free(t->next);
	t->next=NULL;
}

void display(node* root){
	while(root!=NULL){
		printf("%d ",root->data);
		root=root->next;
	}
	printf("\n");
}

int main() { 
	node* root=NULL;
	push(&root,20);
	push(&root,200);
	push(&root,-90);
	display(root);
	pop(&root);
	display(root);
	return 0; 
} 

