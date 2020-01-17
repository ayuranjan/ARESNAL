#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int S[MAX];
int top=-1;
void push(int val);
int pop();
int IsEmpty();
int IsFull();
int ismatching(char a, char b)
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
void push(int val)
{
	int i;
	if(IsFull())
	{
		return;
	}
	top++;
	S[top]=val;

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

int main()
{
	char str[100]="";
	int i;
	puts("Enter an expression using paretheses:");
	gets(str);
	
	i=0;
	while(str[i]!=0)
	{
		if(str[i]=='(' || str[i]=='[' || str[i]=='{')
			push(str[i]);
		
		if(str[i]==')' || str[i]==']' || str[i]=='}')
		{
			char a=pop();
			if(ismatching(a,str[i]==0)
			{
				printf("INvalid");
				return;
			}
			else
			{
			printf("valid");
			}
		}
		i++;
	}
	return 0;
}

		