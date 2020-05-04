#include "bits/stdc++.h"
using namespace std;

class Stack {
	private:
		queue<int> q;
	public:
		void push(int data) {
			
			int size = q.size();
			q.push(data);
			
			int i = 0;
			while(i++ < size) {
				q.push(q.front());
				q.pop();
			}
		}
		
		int pop() {
			
			if(q.empty()) 
				return INT_MIN;
				
			int x = q.front();
			q.pop();
			return x;
		}
		
		int size() {
			return q.size();
		}
		
		void display() {
			queue<int> display = q;
			
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















