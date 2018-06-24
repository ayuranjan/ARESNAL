#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i =0,count = 0;
    printf("ENTER THE STRING:");
    gets(a);
    int lenght;
    lenght = strlen(a);
    for(i=0 ;i< lenght ;i++)
    {
        if (a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U' )
             count++;
    }
    printf("%d",count);
}
