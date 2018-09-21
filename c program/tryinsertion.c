#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,7};
    int num = 6, pos =5, n=6;
    int i ;


    for(i=n-1;i >= pos;i--)
    {
        a[i+1] = a[i];

    }
     a[pos] = num;
     printf("THE NEW ARRAY IS ");
     for(i=0;i<n;i++)
        printf("%d",a[i]);
}
