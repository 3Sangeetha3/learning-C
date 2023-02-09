#include <stdio.h>
int main()
{
    //implict type conversion
    int a=10;
    float b;
    b=a;
    printf("float b=%f",b);
    printf("\t integer a=%d",a);

    //explict conversion
    int a=10;
    float b;
    b = (float)a;
    a = (int)b;
    printf("float b=%f",b);
    printf("\t integer a=%d",a);

}
