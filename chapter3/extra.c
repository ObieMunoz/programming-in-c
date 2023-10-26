/* Based on how main works, I assumed we could create other functions.
 * This was me testing that theory. I'm sure this is explained more later
 * in this book, but I was able to do this properly here. */

#include <stdio.h>

int nextMultiple(int i, int j)
{
    return i + j - i % j;
}

void printNextMultiple(int i, int j)
{
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple(i,j));
}

int main (void)
{
    printNextMultiple(365, 7);
    printNextMultiple(12258, 23);
    printNextMultiple(996, 4);

    return 0;
}

/*
int main (void)
{
    int i, j;

    i = 365;
    j = 7;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple(i,j));

    i = 12258;
    j = 23;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple(i,j));

    i = 996;
    j = 4;
    printf ("For i = %i, j = %i, the next largest even multiple is %i\n", i, j, nextMultiple(i,j));
 
    return 0;
}
*/
