#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	node *left;
	node *right;
};
node *root = NULL;
node *create(node *);
void preorder(node *temp);
void postorder(node *temp);
void inorder(node *temp);

void main()
{
clrscr();
root=create(root);
preorder(root);
cout<<"\n";
inorder(root);
	getch();
}

node *create(node *root)
{
	node *newnode = NULL, *temp = NULL, *parent = NULL;
	int val;
	cout << "enter data or else enter -1 to exit";
	cin >> val;
	while (val != -1)
	{
		newnode = (node *)malloc(sizeof(node));
		newnode->data = val;
		if (root == NULL)
		{
			root = newnode;
			newnode->left = NULL;
			newnode->right = NULL;
		}
		else
		{
			temp = root;
			while (temp != NULL)
			{
				parent = temp;
				if (val < temp->data)
					temp = temp->left;
				else
					temp = temp->right;
			}
			if (val < parent->data)
			{
				parent->left = newnode;
				newnode->left = NULL;
				newnode->right = NULL;
			}
			else
			{
				parent->right = newnode;
				newnode->left = NULL;
				newnode->right = NULL;
			}
		}

		cout << "enter the data or else enter -1 to exit";
		cin >> val;
	}
	cout << "successfully created\n";
	return root;
}

void preorder(node *temp)
{
	if (temp != NULL)
	{
		cout << "\t" << temp->data;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void postorder(node *temp)
{
	if (temp != NULL)
	{

		postorder(temp->left);
		postorder(temp->right);
		cout << "\t" << temp->data;
	}
}

void inorder(node *temp)
{
	if (temp != NULL)
	{
		inorder(temp->left);
		cout << "\t" << temp->data;
		inorder(temp->right);
	}
}
