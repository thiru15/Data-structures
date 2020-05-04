#include "bits/stdc++.h"
using namespace std;

void reverseQueue(queue<int> &q) {
	
	stack<int> st;
	
	while(!q.empty()) {
		st.push(q.front());
		q.pop();
	}
	
	while(!st.empty()) {
		q.push(st.top());
		st.pop();
	}
}

void print(queue<int> q) {
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

main() {
	queue<int> Queue; 
    Queue.push(10); 
    Queue.push(20); 
    Queue.push(30); 
    Queue.push(40); 
    Queue.push(50); 
    Queue.push(60); 
    Queue.push(70); 
    Queue.push(80); 
    Queue.push(90); 
    Queue.push(100); 
  	
  	print(Queue);
    reverseQueue(Queue); 
    print(Queue);
}









