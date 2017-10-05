// Create | Display | Sort
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

void sort(Node *x)
{
    Node *temp = x;
    Node *so = x;
    Node *a = x;
    int min, c;
    min = temp->data;
    while (temp != NULL)
    {
	if (temp->data < min)
	{
	    min = temp->data;
	}
	temp = temp->next;
    }
    while (so != NULL)
    {
	if (so->data == min)
	{
	    c = so->data;
	    so->data = a->data;
	    a->data = c;
	}
	so = so->next;
    }
    x = x->next;
    if (x != NULL)
    {
	sort(x);
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
    sort(head);
    printList(head);
    getch();
    return 0;
}