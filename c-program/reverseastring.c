#include<stdio.h>
#define MAX 5
int S[MAX];
int top=-1;
void push(char s);
int pop();
int IsEmpty();
int IsFull();

int main()
{
	char Str[15];
	int i;
	puts("Enter a string");
	gets(Str);
	while(Str[i]!='\0')
	push(Str[i++]);
	
	while(!IsEmpty())
	printf("%c", pop());
}
int IsFull()
{
	if(top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int IsEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(char s)
{
	if(IsFull())
	{
		return;
	}
	top++;
	S[top]=s;
}
int pop()
{
	if(IsEmpty())
	{
		return;
	}
	else
	{
		return S[top--];
	}
}