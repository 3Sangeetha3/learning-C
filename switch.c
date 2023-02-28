#include <stdio.h>

int main()
{
    char operation;
    double n1, n2;
    printf("enter an operator(+, -, *, /):");
    scanf("%c", &operation);
    printf("enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    switch(operation)
    {
        default:
        printf("errror! operator is not corrrect");//default can be placed anywhere and will be executed at the last
        break;

        case'+':
        printf("%.1lf + %.1lf = %.1lf", n1,n2,n1+n2);
        break;
        case'-':
        printf("%.1lf - %.1lf = %.1lf", n1,n2,n1-n2);
        break; 
        case'*':
        printf("%.1lf * %.1lf = %.1lf", n1,n2,n1*n2);
        break;
        case'/':
        printf("%.1lf / %.1lf = %.1lf", n1,n2,n1/n2);
        break;
    }
    return 0;
}
