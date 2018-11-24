// Linked List

#include <stdio.h>
#include <stdlib.h> 
#define pf(d,x) printf("%d ",x)
#define nl printf("\n")

typedef struct node{
	int data;
	struct node* next;
}node;

void display(node* head){
	while(head!=NULL){
		pf(d,head->data); 
		head=head->next;
	}
	nl;
}

void addBack(node** head, int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	node* last = *head;
	if(*head==NULL){
		*head=newNode;
		return;		
	}
	while(last->next!=NULL) last=last->next;
	last->next=newNode;
	return;
}

void addFront(node** head, int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data=data;
	newNode->next=*head;
	*head=newNode;	
}

void addAfter(node* pre, int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data=data;
	newNode->next=pre->next;
	pre->next=newNode;
}

void delFront(node** head){
	node* t= *head;
	*head=t->next;
	free(t);
	return;
}

void delBack(node** head){
	node* t= *head;
	if(t->next==NULL){
		free(head);
		free(t);
		return NULL;
	}
	while(t->next->next!=NULL){
		t=t->next;
	}
	free(t->next);
	t->next=NULL;
}

void del(node** head, int pos){
	node* t = *head;
	if(pos==0){
		delFront(head);
		return;
	}
	else{
		int i=0;
		for(i=0; i<pos-1; i++){
			t=t->next;
		}
		node* next=(t->next)->next;
		free(t->next);
		t->next=next;
		return;	
	}	
}

void reverse(node** head){
	node* prev =NULL;
	node* curr =*head;
	node* next =NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*head=prev;
}

int main(){
	node *head = NULL;
	addBack(&head,10);
	addBack(&head,20);
	addBack(&head,-50);
	display(head);
	addFront(&head,0);
	display(head);	 
	addAfter(head->next,40);
	display(head);
	delBack(&head);
	display(head);
	delFront(&head);
	display(head);
	del(&head,0);
	display(head);
	reverse(&head);
	display(head);
	return 0;
}
