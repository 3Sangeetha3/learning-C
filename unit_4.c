//array is continuous memory alocation
//array will always store the data of the same datatype
//size of array is always remains same throughout the program

/*array is of 2 types
    1. sized array  : we can initialize the sized or not
    2. unsized array : we must always initialize the unsized array*/

#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[] = {1,2,3}; //unsized array
    //sized array
    printf("first element of a is : %d", a[0]);
    printf("\naddress of a is : %d", a); // this will give the very first address (base address) of the array 
    printf("\naddress of first element of a is : %d", &a);
    printf("\naddress of second element of a is : %d", &a[1]);
    printf("\nsecond element of a is : %d", a[1]);

    a[0] = 100;
    printf("\nupdated first element of a is : %d", a[0]); 
}
