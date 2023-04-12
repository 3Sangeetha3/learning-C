#include <stdio.h>

int main()
{
    int a[5]={1},i,b[5]={1,2,3,4,5,6,7};
    for (i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
    printf("********");
    for (i=0;i<7;i++)
    {
        printf("\n%d ", b[i]);
    }

}