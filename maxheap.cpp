/* write a program to insert the elements into  maximum heap */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define s 30
int a[s],n=7;
void maxheap(int a[],int i,int n1);
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
	maxheap(a,i,n1);
	for(j=0;j<n1;j++)
	cout<<"\t"<<a[j]);
	cout<<"\n";
}

void maxheap(int a[],int i,int n1)
{
	int max,l,r;
	max=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n1&&r<n1)
	{
		if(a[l]>a[max])
		{
			max=l;
		}
		if(a[r]>a[max])
		{
			max=r;
		}
	}
	else if(l<n1&&r>=n1)
	{
		if(a[l]>a[max])
		{
			max=l;
		}
	}
	else if(l>=n1&&r<n1)
	{
		if(a[r]>a[max])
		{
			max=r;
		}
	}
	if(i!=max)
	{
		int temp=a[i]; //swap
		a[i]=a[max];
		a[max]=temp;
		maxheap(a,i,n1);
	}
}

