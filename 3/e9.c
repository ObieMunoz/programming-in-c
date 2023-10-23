/* Write a program to find the next largest even multiple for the following
 * values of i and j:
 *
 * i        j
 * 365      7
 * 12,258   23
 * 996      4
 */ 

#include <stdio.h>

int main (void)
{
    int i, j;

    i = 365;
    j = 7;
    int nextMultiple = i + j - i % j;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple);

    i = 12258;
    j = 23;
    nextMultiple = i + j - i % j;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple);

    i = 996;
    j = 4;
    nextMultiple = i + j - i % j;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple);
 
    return 0;
}
