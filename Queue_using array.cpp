#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
class Queue
{
	int rear,front;
public:
	int a[MAX];
	Queue(){
		rear=-1;
		front=-1;
	}
	bool isEmpty(){
		return(front==rear);
	}
	bool isFull(){
		return(rear>=MAX-1);
	}
	void insert(int x){
		if(!isFull()){
			a[++rear]=x;
			cout<<x<<" is inserted"<<endl;
		}
		else{
			cout<<"Queue is full"<<endl;
		}
	}
	void del(){
		if(!isEmpty()){
			cout<<a[++front]<<" is deleted"<<endl;
		}
		else{
			cout<<"Queue is empty"<<endl;
		}
	}
	void show(){
		for(int i=front+1; i<=rear; i++) cout<<a[i]<<" ";
			cout<<endl;
	}
};
int main(){
	Queue q;
	q.insert(20);
	q.insert(30);
	q.insert(10);
	q.show();
	q.del();
	q.show();
	return 0;
}