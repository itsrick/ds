#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#define max 5
void ins();
void del();
void disp();

int arr[10], front = -1, rear = -1, x;

void main()
{
    clrscr();
    ins();
    ins();
    ins();
    ins();
    del();
    disp();
    getch();
}

void ins()
{
    //4overflow-check rear==front-1||rear==max-1&&front==0
    if (front == -1)
    {
        front = 0;
        cin >> arr[++rear];
    }
    //rear has gone full circle and needs to reinitialize
    else if (rear == max - 1 && front != 0)
    {
        rear = 0;
        cin >> arr[rear];
    }
    else
    {
        cin >> arr[++rear];
    }
}

void del()
{
    //Check if empty ie- if front=-1
    //Queue under if front==rear
    //front moved full circle
    if (front == max - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void disp()
{
    //Check empty front=-1
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        for (int i = front; i < max; i++)
        {
            cout << arr[i];
        }
        for (i = 0; i <= rear; i++)
        {
            cout << arr[i];
        }
    }
}