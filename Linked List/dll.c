#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // global variable - pointer to head node.

 
struct Node* create_node(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = create_node(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}


void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = create_node(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}


void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}




int main() {

	/*code to test the implementation*/
	head = NULL; 
	
	// Calling an Insert and printing list both in forward as well as reverse direction. 
	InsertAtTail(2);
    Print(); 
    InsertAtTail(4);
    Print();
    InsertAtHead(6);
    Print();
    InsertAtTail(8);
    Print();
    	
} 
