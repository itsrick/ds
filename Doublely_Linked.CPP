// Create | Display | Sort
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>

// A linked list node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void push(node **head_ref, int new_data)
{
    node *new_node = (node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void printList(node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
}

void sort(node *head)
{
    node *temp;
    node *temp1 = head;
    node *temp2;
    int x;
   while (temp1->next != NULL)
    {
	temp2 = head;
	while (temp2->next != NULL)
	{
	    temp = temp2->next;
	    if (temp2->data > temp->data)
	    {
		x = temp->data;
		temp->data = temp2->data;
		temp2->data = x;
	    }
	    temp2 = temp2->next;
	}
	temp1 = temp1->next;
    }
}

int main()
{

    node *head = NULL;
    clrscr();
    push(&head, 7);
    push(&head, 1);
    push(&head, 8);
    push(&head, 9);
   printList(head);
    sort(head);
   printList(head);
    getch();
    return 0;
}