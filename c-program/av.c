#include<stdio.h>
void end();
int main()
{ 
    int a[10] = {1,1,1,1,2,2,3,3,5,5};
    int count[10];
    int i,j,n=10,num,c;
    
    for( i=0;i<n;i++)
    {
    
            c = 0;
        
        for(j=0;j<n;j++)
        {
            if (a[i] == a[j])
            {
                c++;

            }
        }
        count[i] = c ;

    }
    
    for(i =0;i<n;i++)
    {
        printf("the count of %d is %d \n",a[i],count[i]);
        for(j=i+1;j<n;j++)
        {
           if(a[j] != a[i])
           {

               i = j-1;
               break;

           }
           else 
           {
               end();
           }
        }
   
 }
 void end()
 {
     printf(" ");
 }