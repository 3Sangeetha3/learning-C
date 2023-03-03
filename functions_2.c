#include <stdio.h>
int sum();
int main()
{
    int result;
    printf("in main function");
    
    result = sum(); ///function call
    printf("\n sum is : %d", result);

}
int sum()
{
    int num1, num2;
    printf("\nEnter the value of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    return (num1+num2);
}