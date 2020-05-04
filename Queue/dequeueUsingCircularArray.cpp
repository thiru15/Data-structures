#include "bits/stdc++.h"
#define SIZE 10
using namespace std;

int arr[SIZE], front = -1, rear = -1;

bool isEmpty() {
	if(rear == -1 && front == -1)
		return true;
	return false;
}

bool isFull() {
	if(front == rear+1 || (rear == SIZE-1 && front == -1))	
		return true;
	return false;
}

void insertFront(int data) {
	if(isFull())
		return;
	
	if(front == -1 || front == 0)
		front = SIZE-1;
	else 
		front--;
	arr[front] = data;
}

void insertRear(int data) {
	if(isFull())
		return;
	
	if(rear == SIZE-1)
		rear = 0;
	else 
		rear++;
	arr[rear] = data;
}

void deleteFront() {
	if(isEmpty())
		return;
	
	if(front == SIZE-1)
		front = 0;
	else
		front++;
}

void deleteRear() {
	if(isEmpty())	
		return;
	
	rear--;
}

int getFront() {
	if(front == -1)
		return INT_MIN;
	return arr[front];
}

int getRear() {
	if(rear == -1)
		return INT_MIN;
	return arr[rear];
}

main() {
	for(int i = 1; i <= 11; i++)
		insertRear(i);
	cout << getRear() << " ";
	for(int i = 1; i <= 20; i++)
		deleteRear();
	cout << getRear() << ends;
 	  cout << "Insert element at rear end  : 5 \n"; 
    insertRear(5); 
  
    cout << "insert element at rear end : 10 \n"; 
    insertRear(10); 
  
    cout << "get rear element " << " "
         << getRear() << endl; 
  
    deleteRear(); 
    cout << "After delete rear element new rear"
         << " become " << getRear() << endl; 
  
    cout << "inserting element at front end \n"; 
    insertFront(15); 
  
    cout << "get front element " << " "
         << getFront() << endl; 
  
    deleteFront(); 
  
    cout << "After delete front element new "
       << "front become " << getFront() << endl; 
}















