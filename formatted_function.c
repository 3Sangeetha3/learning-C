#include <stdio.h>
//scanf and printf are formatted functions

int main()
{
    int a = 100;
    int b = 1000;
    float c = 100.23456;
    printf("a = %4d",a); ///we are the spaces for the number
    printf("\nb = %4d",b);
    printf("\n%.2f", c);

    //unsigned integers is for positive integers if given a negative number it will take an garbage value
    unsigned int d = 100;
    printf("d=%u",d);
    return 0;
}
