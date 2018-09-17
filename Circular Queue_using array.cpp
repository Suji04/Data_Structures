#include <bits/stdc++.h>
using namespace std;

class Circular_Queue {
	int front, rear, size, *arr;
public:
	Circular_Queue(int s){
		front=-1;
		rear=-1;
		size=s;
		arr=new int[size];
	}
	bool isFull(){
		return ((front==0 && rear==size-1) || front==rear+1);
	}
	bool isEmpty(){
		return (front==-1);
	}
	void insert(int val){
		if(!isFull()){
			if(front==-1){
				front=0;
				rear=0;
			}
			else{
				if(rear==size-1) rear=0;
				else rear++;
			}
			arr[rear]=val;
			cout<<val<<" is inserted"<<endl;
		}
		else cout<<"Queue is full"<<endl;
	}
	void del(){
		if(!isEmpty()){
			cout<<arr[front]<<" is deleted"<<endl;
			if(front==rear){
				front=0;
				rear=0;
			}
			else{
				if(front==size-1) front=0;
				else front++;
			}
		}
		else cout<<"Queue is empty"<<endl;
	}
	void show(){
		if(front==-1) cout<<"Queue is empty"<<endl;
		else{
			if(rear>=front){
				for(int i=front; i<=rear; i++) cout<<arr[i]<<" ";
			}
			else{
				for(int i=front; i<size; i++) cout<<arr[i]<<" ";
				for(int i=0; i<=rear; i++) cout<<arr[i]<<" ";	
			}
		cout<<endl;
		}
	}
	
};

int main(){
	Circular_Queue q(5);
	q.show();
	q.insert(10);
	q.insert(30);
	q.insert(42);
	q.show();
	q.del();
	q.insert(65);
	q.insert(3);
	q.insert(10);
	q.insert(300);
	q.show();
	return 0;
}