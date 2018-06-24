#include<stdio.h>
int main()
{
     int i ,n, arr[10],largest  = -100000000000,seclarge= -10000 ;
     printf("ENTER NO OF ELEMENT IN ARRAY :");
     scanf("%d",&n);
     for ( i=0;i< n;i++)
     {
         scanf("%d",&arr[i]);

     }
     for(i=0;i<n;i++)
     {
         if ( arr[i]> largest)
            largest = arr[i];
     }
     printf("THE LARGEST NUMBER IS %d",largest);

     for(i= 0 ;i< n;i++)
     {
      if (arr[i] != largest)
      {
          if(arr[i] > seclarge )
            seclarge = arr[i];

      }
     }
     printf("SECOND LARGEST IS %d",seclarge);
}
