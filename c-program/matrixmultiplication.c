#include<stdio.h>
int main()
{
    int arr1[10][10] ={ {1,1} ,{2,2} ,{3,3},{4,4},{5,5}} ,arr2[10][10] ={ {5,5} ,{4,4} ,{3,3},{2,2},{1,1}}  ;
    int arr[10][10] ={ {0,0}, {0,0},{0,0} , {0,0} , {0,0} };
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[10][10] += arr1[i][j] +;/ arr2[i][j];
        }


    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d",arr[i][j]);
        }
    }





}
