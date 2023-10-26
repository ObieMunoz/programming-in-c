// Using Nested for Loops and scanf practice

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter;

    printf ("How many triangular numbers do you want to find? ");
    scanf ("%i", &counter);
    printf ("\n");

    for ( int i = 0; i < counter; ++i)
    {
        printf ("What triangular number do you want? ");
        scanf  ("%i", &number);

        triangularNumber = 0;

        for ( n = 1; n <= number; ++n)
        {
            triangularNumber += n;
        }

        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}
