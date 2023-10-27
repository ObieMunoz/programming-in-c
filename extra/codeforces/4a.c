// CodeForces Problem 4A: Watermelon

#include <stdio.h>

int main (void)
{
    int x;
    scanf ("%i", &x);
    if ( x % 2 == 0 && x > 2 )
        printf ("YES");
    else 
        printf ("NO");

    return 0;
}
