#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("ENTER THE 3 NUMBERS:");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1 < n2 && n1<n3)
        printf("SMALLEST IS %d",n1);
    else if ( n2 <n1 && n2<n3)
        printf("Smallest is %d",n2);
    else
        printf("SMALLEST IS %d",n3);
}
