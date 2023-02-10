#include<stdio.h>

//postfix : in this assignement is done first then increment or decreament is done
//in prefix first it increament or decreament then the assignment takes place
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
