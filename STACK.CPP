#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#define max 5

class Stack
{
    int top;
  public:
    int a[max];
    Stack()
    {
	top = -1;
    }
    void push(int x);
    int pop();
};

void Stack:: push(int x){
a[++top]=x;
}

int Stack:: pop(){
    int x=a[top--];
    return x;
}

void main(){
    struct Stack s;
    clrscr();
    s.push(10);
    cout<<s.pop();
    getch();
}
