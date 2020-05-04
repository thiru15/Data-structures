#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node *left, *right;	
}*root = NULL;

struct node* newNode(int data) {
	
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->right = temp->left = NULL;
	
	return temp;
}


bool isCompleteBT() {
	
	queue<struct node*>	q;
	q.push(root);
	bool flag = false;
	struct node* temp;
	
	while(!q.empty()) {
		temp = q.front();
		q.pop();
		
		if(temp->left) {
			if(flag)
				return false;
			q.push(temp->left);
		}
		else
			flag = true;
		
		if(temp->right) {
			if(flag)
				return false;
			q.push(temp->right);
		}
		else
			flag = true;
	}
	
	return true;
}

main() {
 	root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->right = newNode(6); 
  
    if (isCompleteBT()) 
        cout << "Complete Binary Tree"; 
    else
        cout << "NOT Complete Binary Tree"; 	
}













