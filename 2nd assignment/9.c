//year week day from days
#include<stdio.h>

int main()

{
    int x, y, z, a;
    printf("Enter days: ");
    scanf("%d", &x);

    y=x/365;
    z=(x%365)/7;
    a=(x%365)%7;
    printf("%d days= %d year/s, %d week/s, %d day/s\n", x, y, z, a);




    return 0;
}
