#include<stdio.h>

int main()
{
    int a=10, b=20;
    
    if (a>b)                            //do not have to add semicolon because the statement is not terminated here 
                                        //if added it will understand that the statement is completed and print the next line i.e, is a is greater than b
    {printf("a is greater than b");     //if alone can be printed without else
    printf("\nhello");}                 // we have to create a block using cruly brackets
                                        /*print nothing if the statement is false and print the statement is true
                                        In if condition we have to add parenthesis ()
                                        else will work iff if is false*/
    
    else
        {printf("a is less than b");
        printf("\nhello");} 
    return 0;
}
