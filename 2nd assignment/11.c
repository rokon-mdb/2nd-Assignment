//finding area of triangle
#include<stdio.h>

int main()

{
    float x, y, z;
    printf("Enter base of the triangle: ");
    scanf("%f", &x);
    printf("\nEnter hight of the triangle: ");
    scanf("%f", &y);

    z=(x*y)/2;
    printf("\n\n\nArea of the triangle = %.2f sq. units\n\n\n", z);

    return 0;
}
