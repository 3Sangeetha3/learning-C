#include <stdio.h>
int sum(int a,int b)        ///formal arguments
{
    return(a+b);
}

int main()
{
    int num1, num2, result;
    printf("in main function");
    printf("\n Enter the values of num1 and num2 ; ");
    scanf("%d %d",&num1,&num2);
    result = sum(num1, num2);   ///function call,actual arguments
    printf("\nback in main");
    printf("\nSum is : %d",result);
}