#include<stdio.h>
#define max 10
int queue[max];
int front = -1,rear =-1;
void insert();
int delete();
int peek();
void display();
int main()
{
    int option,val;
    do{
        printf("\n1 for inserting an element ");
        printf("\n 2 for deleting am elemrnt");
        printf("\n 3 for peek ");
        printf("\n 4 for display");
        scanf("%d",&option);
        switch(option)
        {
            case 1 : insert();
                     break;
            case 2 : val =delete();
                     printf("%d",val);
                     break;
            case 3 : val =peek();
                    printf("%d",val);
                    break;
            case 4 : display();
                    break;
            
        }

    }while(option != -1);
    return 0;
}
void insert()
{
    int num ;
    printf("Enter the number  to be inserted :");
    scanf("%d",&num);
    if(rear == MAX)
      printf("OVERFLOW");
    else if (front == -1 &&  rear == -1 )
         front = rear = 0;
    else 
         rear ++;
    queue[rear] = num ;
}

