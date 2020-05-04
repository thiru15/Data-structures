#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node* next;
}*head = NULL;

struct tree {
	int data;
	struct tree *left, *right;	
}*root = NULL;

struct tree* newBTNode(int data) {
	
	struct tree* temp = (struct tree*)malloc(sizeof(struct tree));
	temp->data = data;
	temp->left =  temp->right = NULL;
	
	return temp;	
}

struct node* newNode(int data) {
	
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next =  NULL;
	
	return temp;
}

void inorder(struct tree* root) {
	
	if(root) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

void constructTree() {
	
	queue<struct tree*> q;
	q.push(newBTNode(head->data));
	root = q.front();

	head = head->next;
	
	while(head) {
			
		struct tree* parent = q.front();
		q.pop();		
		
		parent->left = newBTNode(head->data); 
		q.push(parent->left);
		head = head->next;
			
		if(head) {
			parent->right = newBTNode(head->data);
			q.push(parent->right);
			head = head->next;
		}
	}
	
}

main() {
	
	head = newNode(10);
	head->next = newNode(12);
	head->next->next = newNode(15);
	head->next->next->next = newNode(25);
	head->next->next->next->next = newNode(30);
	head->next->next->next->next->next = newNode(36);
	
	constructTree();
	
	inorder(root);
}















