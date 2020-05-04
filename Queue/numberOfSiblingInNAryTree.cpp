#include "bits/stdc++.h"
using namespace std;

class Node {
	
	public:
		int key;
		vector<Node*> child;
		Node(int key) {
			this->key = key;
		}
		
};

int numberOfSiblings(Node* root, int key) {
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()) {
		
		Node* x = q.front();
		q.pop();
		
		for(int i = 0; i < x->child.size(); i++) {
			
			if(x->child[i]->key == key)
				return x->child.size()-1;
			q.push(x->child[i]);
		}
	}
	return INT_MIN;
}
	
main() {
	
	Node* root = new Node(50); 
    (root->child).push_back(new Node(2)); 
    (root->child).push_back(new Node(30)); 
    (root->child).push_back(new Node(14)); 
    (root->child).push_back(new Node(60)); 
    (root->child[0]->child).push_back(new Node(15)); 
    (root->child[0]->child).push_back(new Node(25)); 
    (root->child[0]->child[1]->child).push_back(new Node(70)); 
    (root->child[0]->child[1]->child).push_back(new Node(100)); 
    (root->child[1]->child).push_back(new Node(6)); 
    (root->child[1]->child).push_back(new Node(1)); 
    (root->child[2]->child).push_back(new Node(7)); 
    (root->child[2]->child[0]->child).push_back(new Node(17)); 
    (root->child[2]->child[0]->child).push_back(new Node(99)); 
    (root->child[2]->child[0]->child).push_back(new Node(27)); 
    (root->child[3]->child).push_back(new Node(16)); 
    
    int x = 99;
    
	cout << numberOfSiblings(root, x) << endl; 
  
}



















