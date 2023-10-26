// Write a program that evaluates the following expression and displays the
// results (remember to use exponential format to display the result) 
// (3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 * 10^-6 + 2.01 x 10^-8)

#include <stdio.h>

int main (void)
{
    printf ("%e", (3.31 * 10e-8 * 2.01 * 10e-7) / (7.16 * 10e-6 + 2.01 * 10e-8));
}
