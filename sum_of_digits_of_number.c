//a program to find the sum of digits in a number such as 105=1+0+5


/*I'm assuming you have the number in an integer variable. Now observe that if you take a number mod 10, you get the least significant digit of that number.

For example : 105%10=5.

Now after extracting the least significant digit, you need the rest of the number to continue again. This can be done with integer division by 10.

For example: 105/10=10 ( / denotes integer division).*/


/*The program starts by declaring three variables: n (the input number), a (a variable to store each digit), and s (a variable to store the sum of digits).
It then asks the user to enter a number using the printf() function and reads the input using the scanf() function.
The program then enters a while loop that will continue until n becomes 0.
Inside the while loop, the program uses the modulus operator (%) to find the last digit of n and stores it in the variable a.
The program then adds the value of a to the variable s.
The program then divides n by 10 (using the division operator /) to remove the last digit from the number.
The loop continues until all the digits have been extracted from n and added to s.
Finally, the program uses printf() function to print the sum of the digits.
Overall, this program is a simple and effective way to find the sum of digits of a given number in C programming language.*/

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
