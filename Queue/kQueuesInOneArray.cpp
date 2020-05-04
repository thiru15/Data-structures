#include "bits/stdc++.h"
#define SIZE 5
using namespace std;

class kQueues {
	
	private:
		int k;
		int *front, *rear, *arr;
	public:		
		kQueues(int k) {
			this->k = k;
			front = new int[k];
			rear = new int[k];
			arr = new int[k*SIZE];
			
			for(int i = 0; i < k; i++) {
				front[i] = i*SIZE;
				rear[i] = i*SIZE;
			}
		}
		
		void enqueue(int data, int n) {
			if(rear[n] == SIZE*(n+1))
				return;
				
			arr[rear[n]++] = data;
				
		}
		
		int dequeue(int n) {
			if(rear[n] == front[n]) 
				return INT_MIN;
				
			int x = arr[front[n]];
			
			for(int i = front[n]; i < rear[n]-1; i++)
				arr[i] = arr[i+1];
			
			rear[n]--;
			return x;
		}
		
		void display(int n) {
			for(int i = front[n]; i < rear[n]; i++)
				cout << arr[i] << ends;
				
			cout << endl;
		}
};

main() {
	
	int k = 3;
    kQueues ks(k); 
  
//     Let us put some items in queue number 2 
    ks.enqueue(15, 2); 
    ks.enqueue(45, 2); 
    ks.display(2);
	ks.dequeue(2);
	ks.display(2);
	ks.dequeue(2);
	ks.dequeue(2);
	ks.display(2);
    ks.enqueue(15, 2); 
    ks.enqueue(45, 2); 
    ks.display(2);
//     Let us put some items in queue number 1 
    ks.enqueue(17, 1); 
	ks.enqueue(49, 1); 
    ks.enqueue(39, 1); 
	ks.enqueue(17, 1); 
	ks.enqueue(49, 1); 
	ks.enqueue(17, 1); 
	ks.enqueue(49, 1); 
    ks.display(1);
	ks.dequeue(1);
	ks.dequeue(1);
	ks.dequeue(1);
	ks.dequeue(1);
	ks.dequeue(1);
	ks.dequeue(1);	
	ks.display(1);
	ks.enqueue(17, 1); 
	ks.enqueue(49, 1); 
    ks.enqueue(39, 1); 
    ks.display(1);
	
    // Let us put some items in queue number 0 
    ks.enqueue(11, 0); 
    ks.enqueue(9, 0); 
    ks.enqueue(7, 0); 
  	ks.display(0);
  
    cout << "Dequeued element from queue 2 is " << ks.dequeue(2) << endl; 
    cout << "Dequeued element from queue 1 is " << ks.dequeue(1) << endl; 
    cout << "Dequeued element from queue 0 is " << ks.dequeue(0) << endl; 
}




















