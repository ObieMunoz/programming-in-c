/* You developed Program 4.9 to reverse the digits of an integer typed in 
 * from the terminal. However, this program does not function well if you 
 * type in a negative number. Find out what happens in such a case and then 
 * modify the program so that negative numbers are correctly handled. For 
 * example, if the number -8645 is typed in, the output of the program should
 * be 5468-. */ 

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int number;
    bool isNegative;

    printf ("Please enter a number.\n");
    scanf ("%i", &number);

    if (number < 0)
        isNegative = true;

    if (isNegative)
        number = -number;

    while (number != 0)
    {
        printf ("%i", number % 10);
        number /= 10;
    }

    if (isNegative)
        printf ("-\n");
    else 
        printf ("\n");

    return 0;
}
