#include "bits/stdc++.h"
#define SIZE 5
using namespace std;

class Queue {
	private :
		stack<int> s1, s2;
	public :
		
		void enqueue(int data) {
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
			
			s1.push(data);
			
			while(!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
		
		int dequeue() {
			if(s1.empty())	
				return INT_MIN;
			
			int x = s1.top();
			s1.pop();
			return x;
		}
		
		void display() {
			stack<int> s = s1;
			
			while(!s.empty()) {
				cout << s.top();
				s.pop();
			}
		}
}q;

main() {
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
	  
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 	
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 	
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 	
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
}




















