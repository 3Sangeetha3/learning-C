#include <stdio.h>
int main()
{
    int a = 90;
    float b=12.23;
    char c;
    c = (char)a; // explict conversion 
    printf("c=%c",c);
    printf("\nc = %d", c);
    a=b;
    printf("\na = %d",a);
}