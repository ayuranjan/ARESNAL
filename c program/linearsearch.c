#include<stdio.h>
int main()
{
    int i ;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int number;
    int count= 0,pos ;
    printf("ENTER NUMBER TO BE SEARCHED:");
    scanf("%d",&number);
    for(i=0;i<10;i++)
    {
        if(arr[i]== number)
         {
            count =1;
            pos = i;
         }

    }
    if(count  == 1)
        printf("arr[%d] = %d",pos,number);
    else
        printf("the array does not have the number");
}
