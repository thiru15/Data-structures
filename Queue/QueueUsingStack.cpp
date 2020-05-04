#include "bits/stdc++.h"
#define SIZE 5
using namespace std;

class Queue {
	private :
		stack<int> s1, s2;
	public :
		
		void enqueue(int data) {
			s1.push(data);
		}
		
		int dequeue() {
			if(s1.empty() && s2.empty())	
				return INT_MIN;
			
			if(s2.empty()) {
				
				while(!s1.empty()) {
					s2.push(s1.top());
					s1.pop();
				}
			}
			
			int x = s2.top();
			s2.pop();
			return x;
		}
		
		void display() {
			
			stack<int> s = s2;
			
			while(!s.empty()) {
				cout << s.top() << ends;
				s.pop();
			}
			
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
			
			s = s2;
			
			while(!s.empty()) {
				cout << s.top();
				s.pop();
			}
		}
}q;

main() {
    q.enqueue(1); 
    cout << q.dequeue() << '\n'; 	
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
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




















