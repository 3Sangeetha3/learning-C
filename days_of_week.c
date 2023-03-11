///printing the days of a weeking using switch case

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number between 0 to 6 : ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
            printf("\n Sunday");
            break;
        case 1:
            printf("\n Monday");
            break;
        case 2:
            printf("\n Tuesday");
            break;
        case 3:
            printf("\n Wednesday");
            break;
        case 4:
            printf("\n Thursday");
            break;
        case 5:
            printf("\n Friday");
            break;
        case 6:
            printf("\n Saturday");
            break;
        default:
            printf("\n Invalid number");
    }
    return 0;
}