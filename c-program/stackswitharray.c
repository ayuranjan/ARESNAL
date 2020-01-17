#include<stdio.h>
#define MAX 10
int stack[MAX], top = -1;
void push (int stack[],int val);
int pop(int stack[]);
int peek(int stack[]);
void display(int stack[]);
int main()
{
    int option ,val;
    do{
        printf("1.PUSH ");
        printf("2.POOP");
        printf("3.PEEK ");
        printf("4.DISPLAY ");
        printf("5.EXIT");
        printf("ENTER YOUR OPTION");
        scanf("%d",&option);
        switch (option)
        {
            case 1 : printf("Enter the number to be pushed ");
                     scanf("%d",&val);
                     push(stack,val);
                     break;
            case 2 : val = pop(stack);
                    if (val != -1)
                    printf("THE VALUE DELETED IS %d",val);
                    break;
            case 3 : val = peek(stack);
                    if (val != -1)
                    printf("THE VALUE AT THE TOP MOST IS %d",val);
                    break;
            case 4 : display(stack);
                    break;
                

        }
    }
    while (option != 5 );
    return 0;
}
 
 void push (int stack[], int val)
 {
     if (top == MAX -1 )
     {
         printf("NO NUMBER CAN BE INSERTED IN THE STACK i.e. OVERFLOW  ");
     }
     else 
     {
         top = top + 1;
         stack[top ] = val;
     }
 }
 
 int pop(int stack[])
 {
     int val;
     if (top == -1)
     {
         printf("UNDERFLOW ");
         return -1;
     }
     else 
     {
         val = stack[top];
         top = top -1 ;
         return val;
     }
 }
  
  int peek(int stack[])
  {
      if (top == -1)
      {
          printf("STACK IS EMPTY ");
          return -1;
      }
      else 
      return stack[top];
  }

  void display(int stack[])
  {
      int i;
      if (top == -1)
      printf("STACK IS EMPTY ");
      else 
      for (i =top;i>=0 ;i--)
      {
          printf("%d",stack[i]);
      }
  }
