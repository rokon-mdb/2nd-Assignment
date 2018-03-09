//sum,average,percentage exam number
#include<stdio.h>

int main()

{
    int s1, s2, s3, s4, s5;
    float x, y, z;

    printf("Enter the number of 1st subject: ");
    scanf("%d", &s1);
    printf("Enter the number of 2nd subject: ");
    scanf("%d", &s2);
    printf("Enter the number of 3rd subject: ");
    scanf("%d", &s3);
    printf("Enter the number of 4th subject: ");
    scanf("%d", &s4);
    printf("Enter the number of 5th subject: ");
    scanf("%d", &s5);
    x=s1+s2+s3+s4+s5;
    y=x/5;
    z=y;

    printf("\n Total number: %.2f \n Average number: %.2f \n Percentage number: %.2f % \n", x, y, z);


    return 0;
}
