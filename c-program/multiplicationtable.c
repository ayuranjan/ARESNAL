#include<stdalign.h>
int main()
{
    int num,i,val;
    printf("Enter the number ") ;
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        val = num * i ;
        printf("%d * %d = %d",num,i,val);
        printf("\n");
    }

}
