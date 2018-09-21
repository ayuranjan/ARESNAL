#include<stdio.h>
int main()
{
   int i,pos,arr[100] = {1,2,3,4,5,7,8,9,10},num;
    printf("ENTER THE POSITION  TO BE DELETED :");
    scanf("%d",&pos);
    for(i=pos;i<=8;i++)
    {
        arr[i] = arr[i+1];
    }
    for(i=0;i<8;i++)
        printf("%d",arr[i]);
}
