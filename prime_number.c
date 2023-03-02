#include <stdio.h>
int main()
{
    /*int a ;
    printf("enter the value of a: ");
    scanf("%d",&a);
    if (a%2==0 && a%a==0)
    printf("is a prime number");
    else
    printf("not a prime number");
    return 0;*/   
/*int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;   */

int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i){

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
}
}
// flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}