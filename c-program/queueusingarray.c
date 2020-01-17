#include<stdio.h>
#define max 10
int queue[max],rear = -1 ,front = -1;
void push(int queue[],int val);
void pop(int queue[]);
void peek(int queue[]);
void display(int queue[]);
int main()
{
    push(queue,7);
    push(queue,9);
    push(queue,69);
    display(queue);
    peek(queue);
    pop(queue);
    display(queue);
    return 0 ;
}
void push(int queue[], int val)
{
    if(rear == max -1)
        printf("QUEUE FULL");
    else if( rear == -1 && front ==-1)
        rear = front = 0;
    else
        rear ++;
    queue[rear] = val;

}
void display(int queue[])
{
    if(front ==-1 || front > rear)
        printf("NO QUEUE EXISTS");
    else
    {
        int i ;
        for(i = front ;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}

void peek(int queue[])
{
    if(front == -1 || front > rear)
        printf("NO QUEUE ");
    else
        printf("%d",queue[front]);
}

void pop(int queue[])
{
    if(front == -1 || front > rear)
        printf("NO QUEUE EXISTS");
    else
    {
        printf("poped number is %d",queue[front]);
        front ++ ;
    }
}