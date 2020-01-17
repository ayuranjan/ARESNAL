#include<stdio.h>
int main()
{
    int i,arr[7] = {7,2,3,6,4,5,1};
    int smallest = 1000;
    for(i=0;i<=7;i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];

    }
    printf(" SMALLEST IS %d",smallest);
     int largest = -9999;
    for(i=0;i<=7;i++)
    {
        if(arr[i]> largest)
            largest =arr[i];
    }
    printf("the greatest is %d",largest);
}
