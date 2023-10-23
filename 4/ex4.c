/* Write a program to generate and print a table of the first 10 factorials */ 

#include <stdio.h>

int main (void)
{
    for (int i = 1, temp = 0; i <= 10; ++i, temp = i)
    {
        for (int j = i - 1; j > 0; --j)
        {
             temp = temp * j;
        }

        printf ("%i\n", temp);
    }

    return 0;
}
