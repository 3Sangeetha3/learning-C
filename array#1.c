#include <stdio.h>

int main()
{
    int a[5],i,sum=0, avg=0;
    printf("Enter the array elements : ");
    for (i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<5;i++)
    {
        printf(" %d ", a[i]);
    }
    //sum and average of array elements
    for (i=0;i<5;i++)
    {
        sum += a[i];
        
        
    }
    printf("\nsum of array elements : %d",sum);
    avg = sum/i;
    printf("\naverage of the array elements: %d ",avg);
}