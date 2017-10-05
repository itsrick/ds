#include<conio.h>
#include<stdio.h>
#include<iostream.h>
struct node
{
	int data;
	node *left;
	node *right;
};
node *root=NULL;
node *create(struct node*);
node *display(struct node *temp);
void preorder(struct node *temp);
void postorder(struct node *temp);
void inorder(struct node *temp);

void main()
{
create(root);
display(root);
getch();
}

node *create(node *root)
{
	node *newnode=NULL, *temp=NULL,*parent=NULL;
	int val;
	cout<<"enter data";
	cin>>val;
	while(val!=-1)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(root==NULL)
	{	root=newnode;
		newnode->left=NULL;
		newnode->right=NULL;
	}
	else
	{
        temp=root;
        //takes us to the bottom of parent
		while(temp!=NULL)
		{
			parent=temp;
			if(val<temp->data)
			temp=temp->left;
			else
			temp=temp->right;
        }
        
		if(val<parent->data)
		{
			parent->left=newnode;
			newnode->left=NULL;
			newnode->right=NULL;
		}
		else
		{
			parent->right=newnode;
			newnode->left=NULL;
			newnode->right=NULL;
		}
	}

	cout<<"enter the data or else enter -1 to exit";
	cin>>val;
	}
printf("successfully created\n");
return root;
}

node *display(node *root)
{
	int choice1;
	cout<<"\n 1.preorder\n  2.inorder \n 3.postorder\n 4.exit\n";
	scanf("%d",&choice1);
	switch(choice1)
	{
		case 1: printf("\t the preorder traversal is ");
		preorder(root);
		break;
		case 2: printf("\t the inorder traversal is ");
		inorder(root);
		break;
		case 3: printf("\t thr postorder traversal is ");
		postorder(root);
		break;
		case 4:break;
	}
	printf("\n");
	return root;
}

void preorder(node *temp)
{	if(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void postorder(node *temp)
{	if(temp!=NULL)
	{

		postorder(temp->left);
		postorder(temp->right);
		cout<<"\t"<<temp->data;
	}
}

void inorder(node *temp)
{	if(temp!=NULL)
	{
		inorder(temp->left);
		cout<<"\t"<<temp->data;
		inorder(temp->right);
	}
}



