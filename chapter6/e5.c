/* What output do you expect from the following program? */ 

#include <stdio.h>

int main (void)
{
    // Initialize a 10 space array with the first index as 1 and the rest 0.
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
    int i, j;

    for ( j = 0; j < 10; ++j )
        for ( i = 0; i < j; ++i )
            numbers[j] += numbers[i]; // Skips pos. 1; Sets numbers[1] as 1
                                      // and then numbers[j] should be doubling
                                      // each iteration

    for ( j = 0; j < 10; ++j)
        printf ("%i ", numbers[j]);

    printf ("\n");

    return 0;
}
