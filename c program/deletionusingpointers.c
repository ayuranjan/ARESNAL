#include<stdio.h>

void delete(int *a,int size,int pos)
{

  int i;
   for( i=pos;i<size;i++){
    a[i]=a[i+1];
}

}
void main(){
    int i,a[10],size,pos;
    printf("Enter the size of an array");
    scanf("%d",&size);

    printf("enter the array\n");

    for( i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the pos at which you want to delete\n");
    scanf("%d",&pos);
    delete(a,size,pos);

    for ( i = 0; i < size - 1; i++) {
        printf("%d\n", a[i]);
    }
}

