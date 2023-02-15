#include <stdio.h>

int main(){
    int age;
    printf("Enter the value of age: ");
    scanf("%d",&age);
    if (age>=18)
    {
    printf("can cast vote");
        if (age>=25)
        {
            printf("\ncan contest in elections");       //we use this whenever the occurance one dependent on the other
        }
    printf("\npart of it only");
    }
    else{
        printf("\n cannot caste vote");
    }
    printf("\nOutside if : will always execute");
}