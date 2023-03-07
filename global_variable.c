#include <stdio.h>
int num1=10; ///gloabal variable
void sum()
{
    printf("\n in sum functional num1 = %d", num1);
}
int main()
{
    int num2 = 20;///local variable we can't use it in void sum(){ ....}
    printf("num1 = %d", num1);
    printf("num2 = %d", num2);
    sum();

}