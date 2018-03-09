//finding area of equilateral triangle
#include<stdio.h>
#include<math.h>

int main ()

{
    float x, y=1.7321, z;

    printf("Enter side of the equilateral triangle: ");
    scanf("%f", &x);

    z=(y*x*x)/4;

    printf("Area of equilateral triangle = %.3f sq. unit\n", z);

    return 0;
}
