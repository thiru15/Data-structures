#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node* next;	
}*root = NULL, *rear = NULL;

void enQueue(int data) {
	
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	
	if(!root) 
		rear = root = temp;
	else {
		rear->next = temp;
		temp->next = root;
		rear = temp;
	}

}

int deQueue() {
	int x = INT_MIN;
	
	if(!root)
		return x;
		
	if(root->next == root) {
		x = root->data;
		root = rear = NULL;
	}
	else {
		x = root->data;
		rear->next = root->next;
		root = root->next;
	}
	
	return x;
}

void display() {
	if(root) {
		struct node* p = root;

		while(p->next != root) {
			cout << p->data << ends;
			p = p->next;
		}
		cout << p->data << ends;		
		cout << endl;
	}
}

main() {
 // Inserting elements in Circular Queue 
    enQueue(14); 
    enQueue(22); 
    enQueue(6); 
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
  	deQueue();
    enQueue(14); 
    enQueue(22); 
    enQueue(6); 
    enQueue(14); 
    enQueue(22); 
    enQueue(6);
    // Display elements present in Circular Queue 
    display(); 
  
    // Deleting elements from Circular Queue 
    printf("\nDeleted value = %d", deQueue()); 
    printf("\nDeleted value = %d", deQueue()); 
  
	// Remaining elements in Circular Queue 
	cout << endl << "Remaining: " << endl;
    display(); 
  
    enQueue(9); 
    enQueue(20); 
    display();	
}















