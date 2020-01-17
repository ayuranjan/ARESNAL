#include<stdio.h>
#include<string.h>

#define max  100
int stack[max];
int top = -1;
void push(char );
char pop();
void main()
{
    char exp[max], ch;
    printf("ENTER THE EXPRESSION :");
    gets(exp);
    int i ,flag = 1;
    for(i = 0;i< strlen(exp);i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        if(exp[i] ==')' || exp[i] == '}' || exp[i] == ']')
           {
               if(top == -1 )
                  flag = 0;
               else
               {
                  ch = pop();
                  if(exp[i] ==')' &&( ch == '{' || ch == '['))
                        flag = 0;
                  if(exp[i] =='}' &&( ch == '(' || ch == '['))
                        flag = 0;
                  if(exp[i] ==']' &&( ch == '{' || ch == '('))
                        flag = 0;
                          
               }
           }
           
    }if(top >=0)
             flag = 0;
    if(flag ==1 )
           printf("VALID EXPRESSION ");
    else 
            printf("INVALID EXPRESSION");
}
void push(char c )
{
    if(top == max - 1)
         printf("STACK OVERFLOW");
    else 
       {
           top++;
           stack[top ]= c;
       }
}
char pop()
{
    if(top == -1 )
       printf("STACK UNDERFLOW");
    else 
    {
        return stack[top];
        top --;
    }
}