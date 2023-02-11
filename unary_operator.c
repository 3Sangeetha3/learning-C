#include<stdio.h>

//postfix : In Postfix assignement is done first then increment or decreament takes place
//prefix: In prefix first it increaments or decreaments then it assigns the value
int main()
{
    int a = 10, b = 20, c;
    c = a++;
    printf("\nValue of c: %d", c);
    printf("\nValue of a: %d", a);
    printf("\nValue of a: %d", a++);
    printf("\nValue of a: %d", ++a);
    printf("\nvalue of b: %d", ++b);
    printf("\nvalue of b: %d", b++); 
}
