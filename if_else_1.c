#include <stdio.h>

int main(){
    int age;
    printf("Enter the value of age: ");
    scanf("%d",&age);
    if (age>=18)
    {
    printf("can cast vote");
    printf("\npart of it only");// created a block to make the complier read both the statemnets in if this will print both the statemnets
    }
    else
    {
        printf("In else");
        printf("\ncan't caste vote");
    }
    printf("\nOutside if : will always execute");
}