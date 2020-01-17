#include<stdio.h>
int arr[] ={9,6,5,0,8,2};
int infinity = 99999;

void merge(int arr[],int p,int q,int r)
{
   int  n1 = (q - p) +1 ;
   int n2 = r- (q +1) +1 ;
   int arr1[n1 +1 ],arr2[n2 +1 ]; //extra space for infinity element 
   int i , j = 0,k ;
   for(i =0;i<= q;i++)
   {
       arr1[i] = arr[i];
   }
   for(i = p+1;i<r ;i++)
   {
    
      arr2[j] = arr[i];
      j++;
   }

arr1[n1+1 ] = infinity;
arr2[n2 + 1 ] = infinity;
i =1 , j= 1;
for(k= p ;k<= r ;i++)
{
    if(arr1[i] <= arr2[j])
    {
        arr[k] = arr1[i];
        i++;
    }
    else
    {
        arr[k ]  = arr2[j] ;
        j++;
    }
    
}

void sort(int arr[],int p ,int r)
{ 
    if(p < r)
    {
       int q = ((p+r)/2);
       sort(arr,p,q);
       sort(arr,q+1,r);
       merge(arr,p,q,r);
       int l = 0;
    for(l = 0 ;l<= 6;l++)
    {
        printf("%d",arr[l]);
    }

    }
    else
    {
        return;
    }
    
    
}



int main()
{
    
    sort(arr,1,6);
    int l = 0;
    for(l = 0 ;l< 6;l++){
        printf("%d",arr[l]);
    }

}

