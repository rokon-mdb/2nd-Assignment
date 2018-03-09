//convert Celsius to Fahrenheit
#include<stdio.h>

int main()

{
    float x, z, y;

    printf("Enter temperature in Celsius =  ");
    scanf("%f", &x);
    y=(9*x)/5;
    z=y+32;
    printf("Temperature in Fahrenheit = %.4f F\n", z);

    return 0;
}
