//Create | Display | Search
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    node *next;
    int data;
};

void print(node* head)
{
    if (head == NULL)
    {
	return;
    }
    print(head->next);
    cout << head->data;
}
void search(node**headref,int data){
    node* current=*headref;
    while(current!=NULL){
	if(current->data==data){
	    cout<<"\nElement found\n";
	    return;
	}else{
	    current=current->next;
	}
    }
    cout<<"Element not found";

}
void push(node **headref, char newdata)
{
    node *newnode = (node *)malloc(sizeof(newdata));
    newnode->data = newdata;
    newnode->next = *headref;
    *headref = newnode;
}
void main()
{
    node *head = NULL;
    clrscr();
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    print(head);
    search(&head,3);
    getch();
}