#include <stdio.h>

int main()
{
    int totalterms, commondifference, firstterm, temp, i;
    printf("enter total number of total terms in ap series:");
    scanf("%d",&totalterms);
    printf("enter the first term and  common difference: ");
    scanf("%d %d",&firstterm, &commondifference);
    temp = firstterm;
    for (i=0;i<totalterms;i++)
    {
        printf("\n%d",temp);
        temp = temp+commondifference;    
    }
}