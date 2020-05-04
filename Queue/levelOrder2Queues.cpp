#include "bits/stdc++.h"
using namespace std;

class Node {
	public:
		Node* left;
		Node* right;
		int key;
		
		Node(int key) {
			this->key = key;
			left = right = NULL;
		}	
};

void levelOrderTraversal(Node* root) {
	
	queue<Node*> q1, q2;
	q1.push(root);
	Node* temp = root;
	
	while(!q1.empty() || !q2.empty()) {
			
		while(!q1.empty()) {
			temp = q1.front();
			q1.pop();
			cout << temp->key << " ";
			if(temp->left)
				q2.push(temp->left);	
			if(temp->right)
				q2.push(temp->right);
		}
		
		cout << endl;
		
		while(!q2.empty()) {
			temp = q2.front();
			q2.pop();
			cout << temp->key << " ";
			
			if(temp->left)
				q1.push(temp->left);
			if(temp->right)
				q1.push(temp->right);
		}
		cout << endl;
	}
}

main() {
 	Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->right = new Node(6); 
  
    levelOrderTraversal(root); 
}














