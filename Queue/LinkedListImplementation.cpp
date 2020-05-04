#include "bits/stdc++.h"
using namespace std;

struct node {
	int data;
	struct node* next;
}*front = NULL, *rear = NULL;

void enQueue(int data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	
	if(!rear) 
		front = rear = temp;
	else {
		rear->next = temp;
		rear = temp;
	}
}

int Front() {
	if(!front)
		return NULL;
		
	return front->data;	
}

int Rear() {
	if(!rear)
		return NULL;
		
	return rear->data;	
}

void deQueue() {
	if(!rear)
		return;
	cout << "Check" << front->data << ends << rear->data << endl;	
	if(front == rear) 
		front = rear = NULL;
	else
		front = front->next;
}

void display() {
	struct node* p = front;
	
	if(!p)
		return;
		
	while(p->next) {
		cout << p->data << ends;
		p = p->next;
	}
	cout << p->data;
	
	cout << endl;
}

main() { 
    
	enQueue(10); 
	display();
    enQueue(20); 
    display();
    deQueue();
	display(); 
    deQueue();
	display(); 
	deQueue();
	deQueue();
    enQueue(30); 
    enQueue(40); 
    enQueue(50); 
    display();
    cout << "Queue Front : " << Front() << endl; 
    cout << "Queue Rear : " << Rear(); 
}















