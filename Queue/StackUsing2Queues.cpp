#include "bits/stdc++.h"
using namespace std;

class Stack {
	private:
		queue<int> q1, q2;
	public:
		void push(int data) {
			
			q2.push(data);
			
			while(!q1.empty()) {
				q2.push(q1.front());
				q1.pop();
			}
			
			// swap(q1, q2);			
			queue<int> temp = q1;
			q1 = q2;
			q2 = temp;

		}
		
		int pop() {
			
			if(q1.empty()) 
				return INT_MIN;
				
			int x = q1.front();
			q1.pop();
			return x;
		}
		
		int size() {
			return q1.size();
		}
		
		void display() {
			queue<int> display = q1;
			
			while(!display.empty()) {
				cout << display.front() << ends;
				display.pop();
			}
			cout << endl;
		}
};

main() {
 	Stack s; 
    s.push(1); 
    s.display();
    s.push(2); 
    s.display();
    s.push(3); 
  	s.display();
  	
    cout << "current size: " << s.size() 
         << endl; 
    s.pop(); 
    s.display();
    s.pop(); 
   	s.display();
  
    cout << "current size: " << s.size() 
         << endl;
		 
	s.pop();
	s.display();
	s.push(100);
	s.display();
}















