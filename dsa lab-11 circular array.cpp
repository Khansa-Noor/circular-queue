#include<iostream>
using namespace std;
const int  size = 10;
class queue{
	private:
    int	arr[size];
    int front;
    int rear;
    int count;
    
    public:
    queue(){
    	front=0;
		rear=0;
		count=0;
    	
	}
	
	void enqueue(int value){
		if(count==size){
			cout<<"Array is full!  Value not inserted"<<endl;
		}
		else{
			
		arr[rear]=value;
		rear= (rear+1)%size;
		count++;
		
		cout<<"Value inserted!"<<endl;
		}
		
		
	}
	
	int dequeue(){
			if(count==0){
			cout<<"Empty!"<<endl;
			return -1;
		}
		else{
		int val= arr[front];
	    front = (front + 1) % size;
        count--;
        return val;
     }
}
	
	void display(){
		cout<<"Displaying: "<<endl;
		for(int i=0;i<count;i++){
			int index = (front+i)%size;
			cout<<arr[index]<<endl;
		}
		
	}	
    	
    
};
int main(){
	queue q;
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(70);
	q.enqueue(50);
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();


}

