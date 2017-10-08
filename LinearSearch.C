#include <stdio.h>
#include <conio.h>
void main()
{
int a[10],key,i,n,flag=0;
clrscr();
printf("enter the number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nENTER A NUMBER: ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
flag=1;
}
if(flag==1)
printf("\nTHE NUMBER %d EXISTS IN THE ARRAY",key);
else
printf("\nTHE NUMBER %d DOES NOT EXIST IN THE ARRAY",key);
getch();
}
