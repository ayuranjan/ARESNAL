#include<stdio.h>
int main()
{
    int i,pos,arr[100] = {1,2,3,4,5,7,8,9,10},num;
    printf("ENter the number to be inserted :");
    scanf("%d",&num);
    printf("ENTER THE POSITION A WHICH NUMBER IS INSERTED :");
    scanf("%d",&pos);
    for(i=8;i>= pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    for(i=0;i<=9;i++)
    printf("%d",arr[i]);
}
