#include "bits/stdc++.h"
using namespace std;

bool checkSorted(int n, queue<int> &q) {
	
	int x = 1;
	stack<int> st;
	
	while(!q.empty()) {
		
		if(x == q.front()) 
			x++;
		else {
			if(st.empty()) 
				st.push(q.front());
			else if(!st.empty() && st.top() < q.front()) {
				return false;
			}
			else
				st.push(q.front());
		}
		
		while(!st.empty() && st.top() == x) {
			st.pop();
			x++;
		}
		
		q.pop();
	}
	
	return x-1 == n && st.empty();
}

main() {
	queue<int> q; 
    q.push(5); 
    q.push(1); 
    q.push(2); 
    q.push(6);
    q.push(3); 
    q.push(4); 
  
    int n = q.size(); 
  
    (checkSorted(n, q) ? (cout << "Yes") : 
                         (cout << "No")); 
}















