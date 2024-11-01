#include<iostream>
using namespace std;
class node{
	public:
	 int data;
    node *next;
    
    node(){
    	data=0;
    	next=NULL;
	}
};
class queue{
	public:
   
	node *front;
	node *rear;
	
	
	queue(){
		front=NULL;
		rear=NULL;
	}
	void enqueue(int value){
		node *newnode =new node;
		newnode->data=value;
		
		if(rear == NULL){
			front=rear=newnode;
			rear->next=front;
			return;
    		}
    		else{
    		rear->next=newnode;
    		rear=newnode;
    		rear->next=front;
			}
    }
	void dequeue(){
		if( front == NULL){
			cout<<"Queue Underflow, Cannot Dequeue."<<endl;
	    }
	    if(front == rear){
	    	delete front;
	    	front = rear = NULL;
		}
		else{
			node *temp=front;
			front=front->next;
			rear->next=front;
			delete temp;
		}
	}
		void display(){
			node *d =front;
			cout<<"Queue Elements: "<<endl;
			do{
				cout<<d->data<<endl;
				d=d->next;
			}while(d!=front);
		}
		
		
};
int main(){
	queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.display();
	q.dequeue();
	q.display();
}
	

