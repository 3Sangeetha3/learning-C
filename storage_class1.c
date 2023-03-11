#include <stdio.h>
int a = 10;
void sum(int a)
{
    printf("\n sum : %d", a);
}

int main()
{
    sum(a);
    auto int a = 20;
    printf("\naddress of a is %p", &a); /// %p is to print the address in the hexa decimal value
    printf("\nDefalut initial value is : %d", a);
    sum(a);
}