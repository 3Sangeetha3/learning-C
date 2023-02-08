#include<stdio.h>

int main()
{
    int a=10, b=20;
    if (a>b)//do not have to add semicolon becoz the statement is not terminated here 
    //if added it will understand that the statement is completed and print the next line i.e, is a is greater than b
    {printf("a is greater than b");//if alone can bee printed without else
    printf("\nhello");}// we have to create a block using cruly brackets
    //print nothing becoz a is less and print if a is greater 
    //in a if condition we have to add parenthesis ()
    //else will work iff if is false
    else
        {printf("a is less than b");
        printf("\nhello");} 
}