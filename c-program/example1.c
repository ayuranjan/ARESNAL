#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    if (n/2 != 0)
        printf("WEIRD");
    else
    { if (n >2 && n<6 )
        printf("NOT WEIRD");
      else if (n>6 && n<20)
        printf("WEIRD");
      else
        printf("NOT WEIRD");
    }

}
