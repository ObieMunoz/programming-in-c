#include <stdio.h>

void fizzbuzz (int n)
{
    int i;

    for ( i = 1; i <= n; ++i )
    {
        if ( i % 3 == 0 )
            printf ("Fizz");
        if ( i % 5 == 0 )
            printf ("Buzz");

        if (( i % 3 ) && (i % 5 ))
            printf("%i", i);

        printf ("\n");
    }
}

int main (void)
{
    int number;

    printf ("Print FizzBuzz up to what count? ");
    scanf ("%i", &number);

    printf ("================================\n");
    fizzbuzz(number);

    return 0;
}
