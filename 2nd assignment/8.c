//convert to Celsius from Fahrenheit
#include<stdio.h>

int main()

{
     float x, y, z;
     printf("Temperature in fahrenheit = ");
     scanf("%f", &x);
     y=5*(x-32);
     z=y/9;
     printf("\nTemperature in celsius = %.4f C\n\n\n", z);
     return 0;

}
