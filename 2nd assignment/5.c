//finding diameter,circumference,area of a circle
#include<stdio.h>

int main ()

{
    float x, y, z, a, Pi=3.1416;
    printf("Enter the radius:");
    scanf("%f", &x);

    y=2*x;
    z=2*Pi*x;
    a=Pi*x*x;
    printf("\nThe diameter is %.2f units", y);
    printf("\nThe Circumference is %.2f units", z);
    printf("\nThe Area is %.2f sq. units\n", a);


    return 0;
}
