/* Write a program that converts 27 degress from degrees 
 * Fahrenheit (F) to degrees Celcius (C) using the following 
 * formula: C = (F - 32) / 1.8 */

#include <stdio.h>

int main(void)
{
    int tempF = 27;
    float tempC = (tempF - 32) / 1.8;

    printf ("%i degrees Fahrenheit is equal to %f degrees Celcius\n", tempF, tempC);

    return 0;
}
