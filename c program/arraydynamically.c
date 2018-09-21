#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1,num2, i,j, *ptr1,*ptr2;

    printf("Enter number of elements: ");
    scanf("%d", &num1);

    ptr1 = (int*) malloc(num1 * sizeof(int));

    printf("Enter elements of array: ");
    for(i = 0; i < num1; i++)
    {
        scanf("%d", ptr1 + i);

    }


    printf("Enter number of elements: ");
    scanf("%d", &num2);

    ptr2 = (int*) malloc(num2 * sizeof(int));

    printf("Enter elements of array: ");
    for(i = 0; i < num2; i++)
    {
        scanf("%d", ptr2 + i);

    }



     int arr1[num1],arr2[num2];
     for(i=0;i<num1;i++)
     {
         arr1[i] =( *ptr1+1);
     }
     for(i=0;i<num2;i++)
     {
         arr2[i] = (*ptr2+1 );
     }

    for(i=0;i<num1;i++)
     {
         printf("%d",arr1[i]) ;
     }
     int count =0;

    if(num1 >num2)
       {
        for(i=0;i<num1;i++)
           {
               for(j=0;j<num2;j++)
               {
                   if(arr1[i] == arr2[j]);
                        {count ++;}
                   if (count ==  num2)
                    printf("ARRAY 2 IS SUBSET OF ARRYAY1");
               }
           }
       }
    else if (num2 >num1)
       {
             for(i=0;i<num2;i++)
           {
               for(j=0;j<num1;j++)
               {
                   if(arr2[i] == arr1[j]);
                        {count ++;}
                   if (count ==  num1)
                    printf("ARRAY 1 IS SUBSET OF ARRYAY2");
               }
           }
       }


     else
     {
       for(i=0;i<num1;i++)
        {
           if( arr1[i] == arr2[i])
             printf("BOTH MATRIX ARE EQUAL");
             break;
         }
     }


}

