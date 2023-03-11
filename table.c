#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (a<=10){
		printf("%d * %d = %d\n",n,a,a*n);
		a++;
	}
	return 0;
}