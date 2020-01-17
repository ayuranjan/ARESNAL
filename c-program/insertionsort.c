#include<stdio.h>
#include <time.h> 
int main()
{
    int arr[] = {7,9,1,3,5,12,6};
    int i ,j,key;
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for(j =1 ;j<7;j++)
    {
        key = arr[j];
        i = j-1 ;
        while((i >= 0) && (arr[i] >key) )
        {
            arr[i+1] = arr[i];
            i = i-1 ;
        }
        arr[i+1] = key ;
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    for (i =0 ;i<7;i++)
        printf("%d\n",arr[i]);

    printf("%lf",cpu_time_used);

}