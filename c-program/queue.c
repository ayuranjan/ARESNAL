#define MAX 5
#include<stdio.h>
#include<stdlib.h>
int Q[MAX];
int f=-1,r=-1;
int IsEmpty();
int IsFull();
void Insertion(int val);
int Delete();
int IsFull()
{
	if(r==MAX-1)
	return 1;
	else 
	return 0;
}
int IsEmpty()
{
	if(f==-1 && r==-1)
	return 1;
	else
	return 0;
}
void Insertion(int val)
{
	if(IsFull)
	return;
	else
	{
		r=r+1;
		Q[r]=val;
		if(f==-1)
		f=f+1;
	}
}
int Delete()
{
	int temp;
	if(IsEmpty)
	return;
	else
	{
		temp=Q[f];
		if(f==r)
		f=r=-1;
		else
		f=f+1;
	}
	return temp;
}
int main()
{
	int i;
	Insertion(10);
	Insertion(20);
	Insertion(30);
	Insertion(40);
	for(i=f;i<=r;i++)
	{
		printf("%d", Q[i]);
	}
	printf("\n");
	
}