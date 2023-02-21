#include <stdio.h>

int main()
{
    /*int i=0;
    do {
        printf("%d",i);
    }
    while(i>0);   */                  //do while loop will always execute atleast once because it is an exit controlled loop

    int i = 0;

        do {
       i++;
        printf("%d\n", i);
        }
        while (i<10);
}