#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#define max 10
void ins();
void del();
void disp();

int rear = -1;
int front = 0;
int queue[max];

void main()
{
    clrscr();
    ins();
    del();
    disp();
    getch();
}

void ins()
{
    int item;
    if (rear == max - 1)
    {
        cout << "overflow";
    }
    else
    {
        cin >> item;
        queue[++rear] = item;
    }
}
void del()
{
    int item;
    if (rear < front)
    {
        cout << "underflow";
        return;
    }
    else
    {
        if (front == rear)
        {
            cout << queue[front] << "reset";

            front = 0;
            rear = -1;
            front++;
        }
    }
    cout << queue[front];
    front++;
    getch();
}

void disp()
{
    if (rear < front)
    {
        cout << "queue is empty";
    }
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << "\n";
    }
}
