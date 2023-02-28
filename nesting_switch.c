#include <stdio.h>

int main()
{
    char ch;
    do
    {
        printf("\n Enter a character, q to quit: ");
        ch = getche();              //e=eco ,getche only takes the input for a character
        printf("\n");
        switch(ch)
        {
            case 'a':
            printf("a ");
            break;
            case 'b':
            printf("b ");
            break;
        }
        printf("\n out of switch ");
    } 
    while (ch !='q');
    printf("End of the program");
    return 0;
}