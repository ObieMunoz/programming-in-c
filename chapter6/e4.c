// Write a program that calculates the average of an array of 10 floating-
// point values.

#include <stdio.h>

int main (void)
{
    int i;
    float values[10] = { }, value, average = 0;

    printf ("Enter your floating point values:\n");

    for ( i = 0; i < 10; ++i )
    {
        scanf ("%f", &value);
        values[i] = value;
    }

    for ( i = 0; i < 10; ++i )
    {
        average += values[i];
    }

    printf ("\n");
    printf ("The average is: %.2f\n", average / 10);

    return 0;
}
