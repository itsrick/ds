#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
char infix[50],ch,post[50],temp[50];
int i=0,j=0,k=0,top=-1;
void push(char e)
{temp[++top]=e;}
char pop()
{return (temp[top--]);}
int pr(char ele)
{switch (ele)
{case'#':return 0;
case ')':return 1;
case'+':
case'-':return 2;
case '*':
case'/':return 3;
}}
void main()
{printf("Enter the infix expression\n");
scanf("%s",&infix);
strrev(infix);
push('#');
while((ch=infix[i++])!=NULL)
{ if (ch==')') push(ch);
 else
 if(isalnum(ch)) post[k++]=ch;
 else
 if(ch=='(')
 {while(temp[top]!=')')
 {post[k++]=pop();
 }ele=pop();}
else
{
 while( pr(temp[top]) >= pr(ch) )
post[k++]=pop();
push(ch);
}  }
while(temp[top]!='#')
{post[k++]=pop();}
post[k]='\0';
strrev(post);
printf("%s",post);
getch();
}