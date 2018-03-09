//finding 3rd angle of a triangle
#include<stdio.h>

int main()

{
    int x, y, z;
    printf("Enter first angle of a triangle: ");
    scanf("%d", &x);
    printf("\nEnter second angle of a triangle: ");
    scanf("%d", &y);
    z=180-(x+y);

    printf("\nThe third angle = %d\n", z);


    return 0;

}
