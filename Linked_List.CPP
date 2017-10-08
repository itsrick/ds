//Create | Display | Search
#include <stdio.h>
#include <iostream>

using namespace std;

node *head = NULL;

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
void search(node* head,int data){
    node* current=head;
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
void push(node *head, char newdata)
{
    node *newnode = (node *)malloc(sizeof(newdata));
    newnode->data = newdata;
    newnode->next = head;
    head = newnode;
}
void main()
{
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);
    print(head);
    search(head,3);
}