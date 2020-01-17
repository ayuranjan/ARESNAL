#include<stdio.h>
#include<math.h>
int main()
{
    int number,output;
    printf("ENTER THE NUMBER :");
    scanf("%d",&number);
    int r,p,t,c ;
    printf("POWER IS : 1.ZERO 2.POSITIVE & EVEN 3.POSITIVE &ODD 4.NEGATIVE");
    scanf("%d",&c);
    int power;
    printf("ENTER THE POWER :");
    scanf("%d",&power);
    switch(c)
    {
    case 1 :
        output = 0;
        printf("THE OUTPUT IS %d",output);
        break;
    case 2 :

        r = (int)  pow(number,power/2);
        output = r * r;
        printf("THE OUTPUT IS %d",output);
        break;
    case 3:

        p = (int) pow(number,power-1);
        output = p * number;
        printf("THE OUTPUT IS %d",output);
        break;
    case 4 :

        t = (int) pow(number, power);
        output = (float) (1/t);
        printf("THE OUTPUT IS %f",output);
        break;
    }

}
