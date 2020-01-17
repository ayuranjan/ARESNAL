#include<stdio.h>
#include<string.h>
#define MAX 5
int S[MAX];
int E[MAX];
int top=-1;
void pushs(char s);
void push(int s);
int pop();
int IsEmpty();
int IsFull();
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
void push(int s)
{
	if(IsFull())
	{
		return;
	}
	top++;
	E[top]=s;
}
void pushs(char s)
{
	if(IsFull())
	{
		return;
	}
	top++;
	S[top]=s;
}
int pops()
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
int pop()
{
	if(IsEmpty())
	{
		return;
	}
	else
	{
		return E[top--];
	}
}
int main()
{
	int i;
	i=0;
	char exp[]="";
	puts("Enter a postfix exp\n");
	scanf("[^\n]", exp);
	while(exp[i])
	{
		pushs('(');
		if(isdigit(exp[i]))
		{
			push(exp[i]);
		}
		else
		{
			if(S[top]=='(')
			pushs(exp[i])
			else if((S[top]=='+'||S[top]=='-'||S[top]=='*'||S[top]=='^'||S[top]=='/'))
			{
				if(exp[i]=='+' && S[top]=='*')
				{
					char var=pops();
					pushs(exp[i]);
					push(var)
				}
				else if(exp[i]=='-' && S[top]=='*')
				{
					char var=pops();
					pushs(exp[i]);
					push(var);
					
				}
				
			
		}
		

}