#include <stdio.h>
void sum(int, float); ///this is basically called as function prototype
void multiply(int, float);
void division(int, float);

int main()
{
    int num1;
    float num2;    
    printf("in main function");

    printf("\nenter the values of num1 and num2: ");
    scanf("%d %f",&num1,&num2);
    sum(num1, num2);   
    printf("\nback in main");
    multiply(num1, num2);
    printf("\n back in main again");
    division(num1, num2);
    printf("\n back in main again");

}
void sum(int x, float y) 
{
    float result;
    result=x+y;
    printf("\n sum is : %f", result);
}
void multiply(int x, float y) 
{
    float result;
    result=x*y;
    printf("\n multiply is : %f", result);
}
void division(int x, float y) 
{
    float result;
    result=x/y;
    printf("\n sum is : %f", result);
}