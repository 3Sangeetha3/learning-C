#include  <stdio.h>

int main()
{
    int i, space, rows, k = 0;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i<=rows; ++i ,k=0) // whenever the k in the while loop is changing with this it will update it again to 0
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k!=2 * i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}