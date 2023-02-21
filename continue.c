#include <stdio.h>

int main()
{
    int i=0;
    for(;i<=100;i++)
    {
        if(i%2==0)
        continue;
        printf("%d ",i);
    }
    printf("outside loop");
}