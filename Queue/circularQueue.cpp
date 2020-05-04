#include "bits/stdc++.h"
using namespace std;

class Queue {
	private:
		int *arr, front, rear;	
		int k;
	public:
		Queue(int k) {
			this->k = k;
			arr = new int[k];
			front = rear = -1;
		}
		
		void enQueue(int data) {
			if((front == 0 && rear == k-1) || front == rear+1)
				return;
			
			if(rear == k-1)
				rear = 0;
			else if(front == -1) {
				front++;
				rear++;
			}
			else
				rear++;
				
			arr[rear] = data;
		}
		
		void displayQueue() {
			cout << front << ends << rear << endl;
			if(front == -1)
				return;

			for(int i = front; i <= rear; i++) {
				cout << arr[i] << ends;
				if(i == k-1 &&  i != rear)
					i = 0;
			}
			cout << endl;
		}	
		
		int deQueue() {
			if(front == -1)
				return INT_MIN;
			
			int x = arr[front];
			
			if(rear == front)
				rear = front = -1;
			else if(front == k-1)
				front = 0;
			else
				front++;
			
			return x;
		}
};

main() {

    Queue q(5); 
  
    // Inserting elements in Circular Queue 
    q.enQueue(14); 
    q.enQueue(22); 
    q.enQueue(13); 
    q.enQueue(-6); 
	q.enQueue(-1);
	q.enQueue(-2);
    q.enQueue(-6); 
	q.enQueue(-1);
	q.enQueue(-2);	
    // Display elements present in Circular Queue 
    q.displayQueue(); 
  
    // Deleting elements from Circular Queue 
	q.deQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue(); 
  
    q.enQueue(9); 
    q.displayQueue(); 
    q.enQueue(20);  
    q.displayQueue(); 
    q.enQueue(5); 
    q.enQueue(9); 
    q.displayQueue(); 
    q.enQueue(20);  
    q.displayQueue(); 
    q.enQueue(5); 
}














