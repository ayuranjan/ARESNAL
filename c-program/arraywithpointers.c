#include<stdio.h>
void main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int *ptr1 ,*ptr2;
    ptr1 = arr;
    ptr2 = &arr[6];
    while(ptr1 <= ptr2)
    {

        printf("%d",*ptr1);
        ptr1 ++;
    }

}
