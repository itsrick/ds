#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#define max 5

int a[max], top=-1;

void push(int x)
{
    a[++top] = x;
}

int pop()
{
    int x = a[top--];
    return x;
}

void main()
{

    clrscr();
    push(10);
    push(2);
    push(3);
    cout<<pop();
    getch();
}
