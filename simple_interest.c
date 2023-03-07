#include<stdio.h>

int main()
{
    int principle, time;        //declaration of principle and time
    float rate, product;        //declaration of rate and product

    printf("Enter the value of principle:");    //printing the input from user
    scanf("%d",&principle);             //Taking input from the user

    printf("Enter the value of rate: ");
    scanf("%f",&rate);

    printf("Enter the value of time:");
    scanf("%d",&time);

    product=(principle*rate*time);

    printf("simpleinterest: %f", product/100);      //Finally printing the simle interest
    
    return 0;

}
