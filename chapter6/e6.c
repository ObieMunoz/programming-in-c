/* You don't need to use an array to generate Fibonacci numbers. You can simply
 * use three variables: two to store the previous two Fibonacci numbers and 
 * one to store the current one. Rewrite program 6.3 so that arrays are not
 * used. Because you're no longer using an array, you need to display each
 * Fibonacci number as you generate it. */ 

#include <stdio.h>

int main (void)
{
    int fib_minus_one, fib_minus_two, current, i;

    fib_minus_two = 0;
    fib_minus_one = 1;

    printf ("%i %i ", fib_minus_two, fib_minus_one);

    for ( i = 0; i < 13; ++i )
    {
        current = fib_minus_two + fib_minus_one;
        printf ("%i ", fib_minus_two + fib_minus_one);
        fib_minus_two = fib_minus_one;
        fib_minus_one = current;
    }

    printf ("\n");

    return 0;
}
