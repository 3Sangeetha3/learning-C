//Print "YES" (without quotes) if the given number is palindromic prime number, print "NO" (without quotes) otherwise Sample Input

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,rem,rev=0,num=0,originalnum;
    scanf("%d",&n);
    originalnum=num;
    while(num!=0)
    {
      rem = num % 10;
      rev = rev*10+rem;
      num = num/10;  
    }
    if ((originalnum == rev)%2==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}
