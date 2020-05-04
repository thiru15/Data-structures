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

int treeHeight(Node* root) {
	
	queue<Node*> q;
	q.push(root);
	int height = 0, size;
	Node* temp = root;
	
	while(!q.empty()) {
		
		height++;
		size = q.size();
		
		cout << size << " " << height << endl;
		
		while(size--) {
			temp = q.front();
			q.pop();
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
	
	return height;
}

main() {
 	Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
  
    cout << "Height of tree is " << treeHeight(root); 
}



















