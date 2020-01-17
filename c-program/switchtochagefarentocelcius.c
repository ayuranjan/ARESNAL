#include<stdio.h>
celTofaren();
farenTocel();
int main()
{
   int num;
   while(num != 3)
   {
    printf("\nPICK ONE 1. CELCIUS TO FAHRENHEIT, 2. FAHRENHEIT TO CELCIUS, 3. EXIT:");
    scanf("%d",&num);
    switch(num)
    {
    case 1 :
        celTofaren();
        break;
    case 2:
        farenTocel();
        break;
    case 3:
        printf("EXIT");
    }
   }
}
 celTofaren()
{
    float cel, faren;
    printf("ENTER THE TEMPERATURE IN CELCIUS:");
    scanf("%f",&cel);
    faren = cel * 1.8 + 32;
    printf("temperature in fahrenheit is %f",faren);

}
farenTocel()
{
    float celcius,fahrenheit;
    printf("ENTER THE TEMPERATURE IN FAHRENHEIT:");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit - 32 ) /1.8;
    printf("TEMPERATURE IN CELCIUS IS %d",celcius);
}
