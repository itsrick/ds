/* write a program to insert the elements into  minimum heap */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define s 30
int a[s],n=7;
void minheap(int a[],int i,int n1);
void buildheap(int a[],int n1);
void heapsort(int a[]);


void main()
{
	int i,j;
	clrscr();
	for(i=0;i<n;i++)
	{
		cout<<"enter value");
		cin>>a[i];
		buildheap(a,i);
	}
	for(j=0;j<n-1;j++)
	cout<<"\t"<<a[j];
	cout<<"\n");
	getch();
}

void buildheap(int a[],int n1)
{
	int i,j;
	for(i=(n1/2)-1;i>=0;i--)
	minheap(a,i,n1);
	for(j=0;j<n1;j++)
	cout<<"\t"<<a[j]);
	cout<<"\n";
}

void minheap(int a[],int i,int n1)
{
	int min,l,r;
	min=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n1&&r<n1)
	{
		if(a[l]<a[min])
		{
			min=l;
		}
		if(a[r]<a[min])
		{
			min=r;
		}
	}
	else if(l<n1&&r>=n1)
	{
		if(a[l]<a[min])
		{
			min=l;
		}
	}
	else if(l>=n1&&r<n1)
	{
		if(a[r]<a[min])
		{
			min=r;
		}
	}
	if(i!=min)
	{
		int temp=a[i]; //swap
		a[i]=a[min];
		a[min]=temp;
		minheap(a,min,n1);
	}
}

