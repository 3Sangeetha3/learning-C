#include <stdio.h>

int main()
{
    int i=0;
    for (;i<10;i++)
    {
        if(i==5)
            break;//here it will not print the 5
        printf("%d",i);
        
        /*if(i==5)
            break;//here it  will print the 5*/
        
    }
    printf("\noutside loop ");
}