// Create | Display
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include<conio.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
	(*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
	cout << node->data;
	node = node->next;
    }
}


int main()
{

    Node *head = NULL;
    clrscr();
    push(&head, 7);
    push(&head, 1);
    push(&head,8);
    push(&head,9);
    printList(head);


    getch();
    return 0;
}