#include <stdio.h>
void display();

int main()
{
    display();
    display();
    display();
}
void display()
{
    int b = 0;
    printf("\n%d .  ", b);
    static int a;///the static storage class preserves the value of the variable across multiple function calls and the default initial value of will be 0
    printf("%d", a);
    
    a += 5;
}