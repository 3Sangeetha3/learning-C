//gp seies using for loop 
//gp series a, ar,a(r*2), ..... where a= first term and r=common ratio
#include <stdio.h>

int main()
{
    int totalterms, commonratio, firstterm, temp, i;
    printf("enter total number of total terms in gp series:");
    scanf("%d",&totalterms);
    printf("enter the first term and  commonratio: ");
    scanf("%d %d",&firstterm, &commonratio);
    temp = firstterm;
    for (i=0;i<totalterms;i++)
    {
        printf("\n%d",temp);
        temp = temp*commonratio;    
    }
}