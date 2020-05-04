#include "bits/stdc++.h"
using namespace std;

bool check(int arr[], int n) {

	int x = 1;
	stack<int> st;
	
	for(int i = 0; i < n; i++) {
		if(x == arr[i])
			st.push(x);
		else {
			if(st.empty())		
				st.push(arr[i]);
			else if(!st.empty() && st.top() < arr[i])
				return false;
			else
				st.push(x);
		}
		
		while(!st.empty() && st.top() == x) {
			st.pop();
			x++;
		}
	}
	
	return x-1 == n && st.empty();
}

main() {
    int A[] = { 4, 1, 2, 3 }; 
    int N = sizeof(A) / sizeof(A[0]); 
    check(A, N)? cout<<"YES": cout<<"NO"; 
}















