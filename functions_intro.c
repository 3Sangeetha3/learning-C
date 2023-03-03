#include <stdio.h>
void sum(); ///this is basically called as function prototype

int main()
{
    printf("in main function");

    sum();   ///function call
    printf("\nback in main");
    sum();
    printf("\nback in main again");
}
void sum() ///function definition
{
    int num1, num2, result;
    printf("\nenter the values of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("\n sum is : %d", result);
}