#include<stdio.h>
int main()
{

    int radius ;
    float area,circumference;
    printf("ENter the radius :");
    scanf("%d",&radius);
    area =  3.14 * radius *radius;
    printf("area is %f",area);
    circumference = 2 * 3.14 * radius;
    printf("perimeter is %f",circumference);
}
