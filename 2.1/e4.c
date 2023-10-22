#include <stdio.h>

int main (void)
{
    int value1, value2, result;
    value1 = 15;
    value2 = 87;
    result = value2 - value1;

    printf ("%i is the result of subtracting %i from %i\n", result, value1, value2);

    return 0;
}
