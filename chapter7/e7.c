/* Write a function that raises an integer to a positive integer power. Call 
 * the function x_to_the_n() taking two integer arguments x and n. Have the 
 * function return a long int, which represents the results of
 * calculating x^n */ 

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
    long int result = x;
    int i;

    for ( i = 1; i < n; ++i )
        result *= x;

    return result;
}

int main (void)
{
    int base, power;

    printf ("Enter a value for the base: ");
    scanf ("%i", &base);

    printf ("Enter a value for the power: ");
    scanf ("%i", &power);

    printf ("%i to the power of %i is %li\n", base, power, x_to_the_n(base, power));

    return 0;
}
