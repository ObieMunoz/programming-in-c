/* A minus sign placed in front of a field width specification causes the
 * field to be displayed left-justified. Substitute the following printf()
 * statement for the corresponding statement in program 4.2 (typo in book,
 * should be 4.3), run the program, and compare the outputs produced by
 * both programs. */ 

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNumber = 0;

    for ( n = 1; n <= 20; ++n)
    {
        triangularNumber += n;
        printf (" %-2i          %i\n", n, triangularNumber);
    }

    return 0;
}
