#include <stdio.h>

int main()
{
    int marks;
    printf("enter the value of marks: ");
    scanf("%d",&marks);

    if (marks>=90)
    printf("A");

    else if (marks>=80)
    printf("\nB");

    else if (marks>=70)
    printf("C");

    else
    printf("F");
}