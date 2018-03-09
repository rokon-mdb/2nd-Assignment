//convert centimeter into meter and kilometer
#include<stdio.h>

int main()
{
    float x, y, z;
    printf("Enter length in centimeter: ");
    scanf("%f", &x);
    y=x/100;
    z=x/100000;
    printf("\n\nLength in meter: %.3f m", y);
    printf("\nLength in kilometer: %.3f km\n\n\n", z);

    return 0;

}
