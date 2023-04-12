#include <stdio.h>

int main()
{
    int b[] = {1,2,3,4};
    int a[5];
    printf("first element of a is : %d", b[0]);
    b[0] = 100;
    printf("\nupdated first element of b is : %d ", b[0]);
    printf("\nmemory of b : %d bytes",sizeof(b));//it wil memory of array
    printf("\nmemory of a ; %d bytes", sizeof(a));
    printf("\nsize of a : %d",sizeof(a)/sizeof(a[0])); //it will give the size of array
    printf("\nsize of b : %d",sizeof(b)/sizeof(b[0]));
    char c[5];
    printf("\nsize of c : %d",sizeof(c)/sizeof(c[0]));
}