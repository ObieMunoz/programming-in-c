/* Write a program that asks the user to type in two integer values in the
 * terminal. Test these two numbers to determine if the first is evenly
 * divisible by the second, and then display an appropriate message in the 
 * terminal. */ 

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int a, b;
    bool isEvenlyDivisible;

    printf ("Please enter two numbers: ");
    scanf ("%i %i", &a, &b);

    if ( a % b == 0 )
        isEvenlyDivisible = true;

    if (isEvenlyDivisible)
        printf ("%i is evenly divisible by %i.\n", a, b);
    else
        printf ("%i is not evenly divisible by %i.\n", a, b);
    
    return 0;
}
