#include "bits/stdc++.h"
using namespace std;

void printMax(int arr[], int n, int k) {
	
	int i, count = 0;
	deque<int> q(k);
	
	for(i = 0; i < k; i++) {
		
		while(!q.empty() && arr[i] > arr[q.back()])
			q.pop_back();
		count++;
		q.push_back(i);
	}
	
	for(; i < n; i++) {
		
		cout << arr[q.front()] << " ";
		
		while(!q.empty() && arr[i] > arr[q.back()] && count++)
			q.pop_back();
		while(!q.empty() && q.front() <= i-k && count++) 
			q.pop_front();
		
		q.push_back(i);
	}
	
	cout << arr[q.front()];
	
	cout << endl << count;
}

main() {
    int arr[] = {100, 1, 200, 100, 3, 0, 12, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 5; 
    printMax(arr, n, k); 
}














