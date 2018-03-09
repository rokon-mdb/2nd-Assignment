//find sum,product,quotient,modulus for two int
#include<stdio.h>

int main()

{
    int x, y, z, a, b, c, m;
    printf("Enter first number:");
    scanf("%d", &x);
    printf("\nEnter second number:");
    scanf("%d", &y);
    z=x+y;
    printf("\nsum= %d", z);
    a=x-y;
    printf("\nDifference= %d", a);
    b=x*y;
    printf("\nProduct= %d", b);
    c=x/y;
    printf("\nQuotient= %d", c);

    m=x%y;
    printf("\nModulus= %d\n\n\n\n", m);


    return 0;


}
