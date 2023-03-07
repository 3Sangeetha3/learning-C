#include <stdio.h>

int main()
{
    ///int num1 = 10, num2 = 20, sum;
    int num1, num2, sum;
    printf("Enter the value of number 1 : ");
    scanf("%d",&num1);//& is the address of the variable num1
    printf("\n Enter the value of number 2: ");
    scanf("%d",&num2);//"...%d" here we can't writechar in column we can only write format specifier
    sum = num1 + num2;
    printf("\n sum of two numbers is: %d", sum);
    

    //alternative


    int num1 = 10, num2 = 20;
    int sum = num1 + num2;
    printf("sum of two numbers is : %d", sum);
}