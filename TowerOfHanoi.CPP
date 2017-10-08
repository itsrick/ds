#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void hanoi(char, char, char, int);

void main()
{   clrscr();
    int num;
    cin >> num;
    hanoi('A', 'B', 'C', num);
    getch();
}

void hanoi(char from, char to, char other, int n)
{
    if (n == 1)
	cout << "\nMove disk from " << from << other;
    if (n > 1)
    {
	hanoi(from, other, to, n - 1);
	hanoi(from, to, other, 1);
	hanoi(to, from, other, n - 1);
    }
}