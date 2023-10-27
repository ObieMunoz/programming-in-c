/* Program 6.2 permits only 20 responses to be entered. Modify that program 
 * so that any number of responses can be entered. So that the user does not 
 * have to count the number of responses in the list, set up the program 
 * so that the value 999 can be keyed in by the user to indicate that the 
 * last response has been entered. (Hint: you can use the break statement 
 * here if you want to exit your loop.) */

#include <stdio.h>

int main (void)
{
    int ratingCounters[11], i, response;

    for ( i = 1; i <= 10; ++i )
    {
        ratingCounters[i] = 0;
    }

    printf ("Enter your responses\n");

    do {
        scanf ("%i", &response);

        if (response == 999)
            break;

        if ( response < 1 || response > 10 )
            printf ("Bad response: %i\n", response);
        else 
            ++ratingCounters[response];

    } while (1); // Infinite loop.  Alternatively we could have used a
                 // for loop with an empty stop condition:
                 // for ( i = 1; ; ++i )

    printf ("\n\nRating    Number of Responses\n");
    printf ("------    -------------------\n");

    for ( i = 1; i <= 10; ++i )
    {
        printf ("%4i%16i\n", i, ratingCounters[i]);
    }

    return 0;
}
