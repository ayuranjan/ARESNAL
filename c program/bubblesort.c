#include<stdio.h>
int main()
{
    int array[8] = {30,52,29,87,63,27,18,54};
    int i,j;
   for(j=0;j<7;j++)
   {
    for(i=0;i<7;i++)
    {
        if(array[i] > array[i+1])
        {
            int swap;
            swap = array[i];
            array[i] = array[i+1];
            array[i+1] = swap;

        }
    }
   }
    for(i=0;i<=7;i++)
        printf("\n%d",array[i]);
}
