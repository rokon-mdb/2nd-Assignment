//finding perimeter
#include<stdio.h>

int main()
{
    float x, y, z;
    printf("length:");
    scanf("%f", &x);
    printf("width:");
    scanf("%f", &y);
    z=2*(x+y);
    printf("perimeter: %.2f\n", z);
    return 0;

}
