/* Find out if your compiler supports variable-length arrays. If it does,
 * write a small program to test the feature out. */ 

#include <stdio.h>

int main (void)
{
    int number, i, current;
    float sum = 0.00f;

    printf ("How many numbers do you want to average?\n");
    scanf ("%i", &number);

    printf ("Enter %i numbers:\n", number);

    for (i = 0; i < number; ++i)
    {
        scanf ("%i", &current);
        sum += current;
    }

    printf ("The average is: %.2f\n", sum / i);

    return 0;
}
