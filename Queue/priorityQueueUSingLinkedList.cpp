#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node* next;	
	int priority;
}*root = NULL;

void push(int data, int priority) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->priority = priority;
	temp->next = NULL;
	
	if(!root)
		root = temp;
	else {
		struct node *p = root, *x = root;
		
		if(priority < p->priority) {
			temp->next = p;
			root = temp;
			return;
		}
		
		while(p && priority > p->priority) {
			x = p;
			p = p->next;
		}
		
		if(x) {
			temp->next = x->next;
			x->next = temp;
		}
			
	}
}

bool isEmpty() {
	if(!root)
		return true;
	return false;
}

int peek() {
	if(root)
		return root->data;
	return INT_MIN;
}

void pop() {
	if(!root)
		return;
	
	root = root->next;
}

void display() {
	if(!root)
		return;
		
	for(struct node* p = root; p; p = p->next)
		cout << p->data << ends;
	cout << endl;
}
main() {
//	push(4, 1);
//	pop();
//	pop();
//	pop();
//	push(5, 2); 
//	pop();
//	push(4, 1);
	push(4, 1);
	display();
	push(5, 2);
    push(6, 3); 
    display();
    push(7, 0); 
    display();
 
}















