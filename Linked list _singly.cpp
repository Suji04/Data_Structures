#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

class linkedList{
 	node *head,*tail;
public:
	linkedList(){
		head=NULL;
		tail=NULL;
	}
	node *gethead(){
		return head;
	}
	void addFront(int val){
		node *t=new node;
		t->data=val;
		t->next=head;
		head=t;
	}
	void addBack(int val){
		node *t=new node;
		t->data=val;
		t->next=NULL;
		if(head==NULL){
			head=t;
			tail=t;
		}
		else{
			tail->next=t;
			tail=t;
		}
	}
	void addAfter(node *pre, int val){
		node *t=new node;
		t->data=val;
		t->next=pre->next;
		pre->next=t;
	}
	void del(node *pre){
		node *t;
		t=pre->next;
		pre->next=t->next;
		delete t;
	}
	void show(){
		node *t;
		t=head;
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<endl;
	}
};

int main(){
	linkedList list;
	list.addBack(10);
	list.addBack(13);
	list.addBack(30);
	list.show();
	list.addFront(20);
	list.addFront(30);
	list.show();
	node *h=list.gethead();
	list.del(h);
	list.show();
	return 0;
}