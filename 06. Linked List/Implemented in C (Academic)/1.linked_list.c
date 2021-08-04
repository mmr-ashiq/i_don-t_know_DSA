/*
A simple C program to introduce
a linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

// Program to create a simple linked
// list with 3 nodes
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* temp = NULL;
	struct Node* add_new_first_node = NULL;

	// allocate 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	add_new_first_node = (struct Node*)malloc(sizeof(struct Node));


	add_new_first_node->data = 20;
	add_new_first_node->next = head;
	head->data = 1; // assign data in first node
	head->next = second; // Link first node with
	// the second node



	// assign data to second node
	second->data = 2;

	// Link second node with the third node
	second->next = third;



	third->data = 3; // assign data to third node
	third->next = NULL;


	temp=add_new_first_node;
    while (temp != 0)
    {
        printf("[%d]   [%d]",temp,temp->data);

        temp = temp->next;
    }
    printf("[NULL]");
	return 0;
}
