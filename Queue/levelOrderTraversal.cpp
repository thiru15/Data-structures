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

int height(struct node* root) {
	if(root == NULL)
		return 0;
	
	int left = height(root->left);
	int right = height(root->right);
	
	return left > right ? left+1 : right+1;
}
	
void printEachLevelValue(struct node* root, int level) {
	
	if(root == NULL)
		return;
	
	if(level == 1)
		cout << root->data << " ";
	else {
		printEachLevelValue(root->left, level-1);
		printEachLevelValue(root->right, level-1);
	}
}

void printLevelOrder() {
	int h = height(root);
	
	for(int i = 1; i <= h; i++)	
		printEachLevelValue(root, i);
}

void printLevelOrderQueue() {
	if(root == NULL)
		return;
		
	queue<struct node*> q;
	q.push(root);
	struct node* temp = q.front();
	
	while(!q.empty()) {
		temp = q.front();
		q.pop();
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
		cout << temp->data << " ";
	}
	
	cout << endl;
}

main() {
	root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
  
    cout << "Level Order traversal of binary tree is \n";  
    printLevelOrder();  

	cout << "\nLevel order traversal using queue \n";
    printLevelOrderQueue();
}


















