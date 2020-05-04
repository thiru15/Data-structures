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

int height(Node* root) {
	
	if(!root)	
		return 0;
	
	int l_height = height(root->left);
	int r_height = height(root->right);
	
	return l_height > r_height ? l_height+1 : r_height+1;
}

void levelOrderTraversal(Node* root) {
	
	queue<Node*> q;
	q.push(root);
	Node* temp;
	int h = height(root);
	
	while(h--) {
		
		int size = q.size();
		
		while(size--) {
			temp = q.front();
			q.pop();
			cout << temp->key << " ";
		
			if(temp->left)	
				q.push(temp->left);
		
			if(temp->right)
				q.push(temp->right);
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
















