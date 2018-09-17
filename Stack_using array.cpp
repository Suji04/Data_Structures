#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
class Stack
{
	int top;
public:
	int a[MAX];
	Stack(){
		top=-1;
	}
	bool isEmpty(){
		return (top<0);
	}
	bool isFull(){
		return (top>=MAX-1);
	}
	void push(int x){
		if(!isFull()){
			a[++top]=x;
			cout<<x<<" is added"<<endl;
		}
		else{
			cout<<"stack is full"<<endl;
		}
	}
	void pop(){
		if(!isEmpty()){
			int x =a[top--];
			cout<<x<<" is removed"<<endl;
		}
		else{
			cout<<"stack is empty"<<endl;
		}
	}
	void show(){
		for(int i=0; i<=top; i++) cout<<a[i]<<" ";
			cout<<endl;
	}
};
int main(){
	Stack s;
	s.push(10);
	s.pop();
	s.push(20);
	s.push(10);
	s.show();
	s.pop();
	return 0;
}