#include <stdio.h>
 
 
 
int main()
{
    float a,b,c;

    printf("Enter Angle A:\n");
    scanf("%f",&a);

    printf("Enter Angle B:\n");
    scanf("%f",&b);

    printf("Enter Angle C:\n");
    scanf("%f",&c);

    float sum = a+b+c;

    if (sum == 180)
    {
        printf("Triangle is possible\n");
    }
    else if (sum != 180)
    {
        printf("Triangle is not possible \n");
    }

   return 0;

}
