//a program to find the sum of digits in a number such as 105=1+0+5


/*I'm assuming you have the number in an integer variable. Now observe that if you take a number mod 10, you get the least significant digit of that number.

For example : 105%10=5.

Now after extracting the least significant digit, you need the rest of the number to continue again. This can be done with integer division by 10.

For example: 105/10=10 ( / denotes integer division).*/

#include<stdio.h> 
 
int main(){ 
    int n,a,s=0; 
    printf("Enter a number: "); 
    scanf("%d",&n); 
     
    while(n>0){ 
        a=n%10; 
        s+=a; 
        n=n/10; 
    } 
     
    printf("\nSum is: %d", s); 
     
    return 0; 
} 