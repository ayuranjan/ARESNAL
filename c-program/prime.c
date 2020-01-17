#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    while(1){
        int n;
        printf("Enter Number ...");
        scanf("%d", &n);

        int i=2;
        bool prime = true;
        while(i<=sqrt(n))
            {
                if (n%i==0)
                {
                        prime=false;
                        break;
                }
                i++;

            }

        if (prime==true) {printf("This is Prime\n");}
        else {printf("This is Composite\n");}
    }
}
