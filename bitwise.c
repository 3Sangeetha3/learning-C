#include<stdio.h>

int main()
{
    int a=15,b=25;
    printf("Bitwise AND : %d", a & b);
    printf("\nBitwise OR: %d",a|b);
    printf("\nBitwise XOR: %d",a^b);
    printf("\nleft shift: %d", a<<1);   //shifts the binary number to left by 1  bit by adding the zero in the last 1111 to 11110
    printf("\nleft shift: %d", a<<2);   //binary fromm 1111 to 111100 we have to 2 zeros in the left
                                        //in left shift the number of bit changes from 4 to  bits or ath

    printf("\nleft shift: %d",b<<1);


    printf("\nright shift: %d",a>>1);
    printf("\nright shift: %d",a>>2);    //here binary from 1111 to 0111
                                        //in right shift the number of bits remain same 4 to 4 only
    printf("\nright shift: %d",a>>4);
    printf("\nright shift: %d",a>>5);   //no change in binary from a>>4 to a>>5

    printf("\nright shift: %d",b>>1);
    printf("\nright shift: %d",a>>2);
    
    return 0;
}
