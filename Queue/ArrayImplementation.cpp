#include "bits/stdc++.h"
#define SIZE 5
using namespace std;

class Queue {
	private :
		int arr[SIZE];	
		int front, rear;
	public :
		Queue() {
			front = 0;	
			rear = 0;
		}
		
		void enqueue(int data) {
			if(rear == SIZE)
				return;
				
			arr[rear++] = data;
		}
		
		int dequeue() {
				
			if(rear == 0)
				return INT_MIN;
			
			int x = arr[front];	
			for(int i = front; i < rear-1; i++)
				arr[i] = arr[i+1];
			
			rear--;
			return x;
		}
		
		int Front() {
			if(rear == 0)
				return INT_MIN;
				
			return arr[front];
		}
		
		int back() {
			if(rear == 0)
				return INT_MIN;
				
			return arr[rear-1];
		}
		
		void display() {
			if(rear == 0)
				return;
				
			for(int i = front; i < rear; i++)
				cout << arr[i] << ends;
				
			cout << endl;
		}
}q;

main() {
  
   	q.enqueue(10);  
   	q.display();
    q.enqueue(20);  
    q.display();
    q.enqueue(30);  
    q.display();
    q.enqueue(40);  
    q.display();
  	q.enqueue(50);
  	q.display();
  	q.enqueue(60);
  	q.display();
  	
    cout << q.dequeue() << " dequeued from queue\n";  
    cout << q.dequeue() << " dequeued from queue\n";  
	cout << q.dequeue() << " dequeued from queue\n";     
    cout << q.dequeue() << " dequeued from queue\n";  
	cout << q.dequeue() << " dequeued from queue\n";  
    cout << q.dequeue() << " dequeued from queue\n";  
    
    q.display();
  
    cout << "Front item is " << q.Front() << endl;  
    cout << "Rear item is " << q.back() << endl;  	
}




















