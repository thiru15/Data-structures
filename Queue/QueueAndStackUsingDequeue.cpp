#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node *next, *prev;
}*root = NULL, *last = root, *sec_last = NULL;

class Dqueue {
	
	public:
		
		void push_rear(int data) {
			
			struct node* temp = (struct node*)malloc(sizeof(struct node));
			temp->data = data;
			temp->next = NULL;
			temp->prev = NULL;
			
			if(!root) 
				last = root = temp;
			else {
				last->next = temp;
				sec_last = last;
				last = temp;
				last->prev = sec_last;
			}
		}
		
		void pop_rear() {
			if(sec_last) {
				last = last->prev;
				sec_last = sec_last->prev;
				last->next = NULL;
			}
			else if(last) 
				last = root = NULL;
		}
		
		void pop_front() {
			if(root)
				root = root->next;
		}
		
		void display() {
			if(!root)	
				return;
			for(struct node* p = root; p; p = p->next)
				cout << p->data << " ";
			cout << endl;
		}
		
		void display_backwards() {
			if(!last)
				return;
			for(struct node* p = last; p; p = p->prev)
				cout << p->data << " ";
			cout << endl;
		}
};


class Stack {
	private:
		Dqueue dq;
	public:
		
		void push(int data) {
			dq.push_rear(data);
		}
		
		void pop() {
			dq.pop_rear();
		}
		
		void display() {
			dq.display_backwards();
		}
};

class Queue {
	private:
		Dqueue dq;
	public:

		void enqueue(int data) {
			dq.push_rear(data);
		}
		
		void dequeue() {
			dq.pop_front();
		}
		
		void display() {
			dq.display();
		}
};

main() {
	
 	Stack stk; 
  
//     push 7 and 8 at top of stack 
    stk.push(7); 
    stk.push(8); 
    stk.push(9); 
    stk.push(1); 
    stk.push(2); 
    stk.push(3); 
    stk.push(4); 
    stk.push(5); 
    stk.push(6); 
    stk.push(0); 
    stk.push(4); 
    stk.push(1);     
    cout << "Stack: "; 
    stk.display(); 
  
    // pop an element 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
    stk.pop(); 
//    stk.pop(); 
    cout << "Stack: "; 
    stk.display(); 
    stk.push(7); 
    stk.push(8); 
    stk.push(9); 
    stk.push(1); 
    stk.push(2); 
    stk.push(3); 
    stk.push(4); 
    stk.push(5); 
    stk.push(6); 
    stk.push(0); 
    stk.push(4); 
    stk.display();

	root = NULL;
	
    // object of Queue 
    Queue que; 
  
//     insert 12 and 13 in queue 
    que.enqueue(12); 
    que.enqueue(13); 
    que.enqueue(12); 
    que.enqueue(13); 
    que.display();
    que.dequeue(); 
    que.dequeue(); 
    que.dequeue(); 
    que.dequeue(); 
    que.dequeue(); 
    que.dequeue(); 
    que.enqueue(12); 
    que.enqueue(13); 
    que.enqueue(12); 
    que.enqueue(13); 
    cout << "Queue: "; 
    que.display(); 
  
    // delete an element from queue 
    que.dequeue(); 
    cout << "Queue: "; 
    que.display(); 
//  	
}










