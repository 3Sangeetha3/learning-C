#include <stdio.h>

int main()
{
    int num, rev=0, i, originalnum, rem;
    printf("enter the value of num: ");
    scanf("%d",&num);
    originalnum=num;
    while(num!=0)
    {
      rem = num % 10;
      rev = rev*10+rem;
      num = num/10;  
    }
    
    printf("Reverse number : %d", rev);
    
    if (originalnum == rev)
    printf("it is a plaindrome");
    else
    printf(" not a palindrome");
    return 0;
}
