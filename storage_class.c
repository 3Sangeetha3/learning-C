#include <stdio.h>
int a = 10;
void sum()
{
    printf("\n sum : %d", a);
}

int main()
{
    sum();
    auto int a = 20;
    printf("\naddress of a is %p", &a); /// %p is to print the address in the hexa decimal value
    printf("\nDefalut initial value is : %d", a);
    sum();

}