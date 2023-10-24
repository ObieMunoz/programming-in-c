/* Write a program that calculates the sum of the digits of an integer. For 
 * example, the sum of the digits of the number 2155 is 2 + 1 + 5 +5 or 13.
 * The program should accept any arbitrary integer typed in by the user. */ 

#include <stdio.h>

int main (void)
{
    int number, temp, result = 0;

    printf ("Enter a number: ");
    scanf ("%i", &number);

    while (number != 0) {
        result += number % 10;
        number = number / 10;
    }

    printf ("%i\n", result);

    return 0;
}
