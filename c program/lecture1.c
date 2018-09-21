// to make a random array we use

 #include<stdio.h>
 void main()

 {
     int i,a[10],item,pos;
     for(i=0;i<10;i++)
        a[i] = rand()%100; // read rand function using google .
     printf("Enter the item to be searched:");
     scanf("%d",&item);
     pos = search(a,item);
     printf("position is %d",pos);

 }
