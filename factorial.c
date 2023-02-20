// n(factorial)/(n-r)factorial
#include <stdio.h>

/*int main() {
    int N;
    long long fact = 1;

    scanf("%d", &N);

    if (N < 1 || N > 10) {
        printf("Error: Input is out of range.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);
    return 0;
}*/

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int N=0,i;
    scanf("%d",&N);
    while (i>0)
        i-=1;
        N=N*(N-1);
        printf("%d",N);
}

