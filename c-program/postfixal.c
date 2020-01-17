#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int S[MAX];
int top=-1;
void push(int s);
int pop();
int IsEmpty();
int IsFull();
int main()
{
	int i=0;
	char exp[20]="";
	printf("Enter the expresion:\n");
	scanf("%s", exp);
	while(exp[i])
	{
		if(isdigit(exp[i]))
			push(exp[i]-'0');
		else
		{
			int val1=pop();
			int val2=pop();
			switch(exp[i])
			{
				case '*':
				{
					push(val1*val2);
					break;
				}
				case '-':
					{
					push(val2-val1);
					break;}
				case '/':
					{push(val2/val1);
					break;}
				case '+':
					{push(val2+val1);
					break;}
				default:
					{printf("Invalid operator\n");
					break;}
			}
		}
		i++;
	}
	printf("%d", pop());
	return 0;
}
void push(int s)
{
	if(IsFull())
	return;
	top++;
	S[top]=s;
}
int pop()
{
	int temp;
	if(IsEmpty())
	return;
	temp=S[top];
	top--;
	return temp;

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