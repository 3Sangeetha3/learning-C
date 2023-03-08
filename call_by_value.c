#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    printf("\n before swapping a = %d and b = %d ",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\n after swapping a = %d and b = %d ",a,b);
}

int main()
{
    ///swappping the two numbers by call by value
    int num1, num2;
    printf("enter the values of num1 and num2 : ");
    scanf("%d %d", &num1,&num2);
    printf("\n before swapping num1 = %d and num2 = %d ",num1,num2);
    swap(num1,num2);
    printf("\n after swapping num1 = %d and num2 = %d ",num1,num2);
}