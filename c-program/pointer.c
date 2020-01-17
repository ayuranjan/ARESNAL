#include<stdio.h>
int main()
{
    int data = 7;
    int *ptr3 =NULL;
    int *ptr4 ;
    ptr4 = data;
    int * ptr1=  &data ;
    int ** ptr2 = &ptr1;
    printf("%d",ptr4);
}