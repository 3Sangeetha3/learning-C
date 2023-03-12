//printing fibonacci series i.e; 0,1,1,2,3,5,8,21,34....
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("\n%d . %d . ",first, second);//printing 0 and 1
    for (i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
    {
            next = first + second;
            printf("%d . ",next);
            first = second;
            second = next;
    }
return 0;    
}