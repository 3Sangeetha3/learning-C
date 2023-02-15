#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,avg;
    printf("Enter the values of m1 : "); 
    scanf("%d ",&m1);
    printf("\nEnter the values of m2 : ");
    scanf("%d ",&m2);
    printf("\nEnter the values of m3 : ");
    scanf("%d ",&m3);
    printf("\nEnter the values of m4 : ");
    scanf("%d ",&m4);
    printf("\nEnter the values of m5 : ");
    scanf("%d ",&m5);
    avg=(m1+m2+m3+m4+m5)/5;

    if (avg>=85)
    printf("O");
    else if (avg>=75)
    printf("A+");
    else if (avg >=65)
    printf("B");
    else
    printf("F");
}