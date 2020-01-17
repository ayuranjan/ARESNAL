#include<stdio.h>
int main()
{
    int i,j,sum,arr[25] ={5,10,15,25,20,19,17,6,8};
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
        {
            sum = arr[i] +arr[j] ;
            if( sum == 25)
                printf(" PAIR IS %d and %d\n" ,i,arr[i],arr[j]);

        }
    }
}
