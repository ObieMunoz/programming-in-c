/* Write a program that accepts two integer values typed by the user. Display
 * the result of dividing the first integer by the second, to three-decimal-
 * place accuracy. Remember to have the program check for division by zero. */ 

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    float a, b;

    printf ("Please enter two integer values.\n");
    
    scanf ("%f %f", &a, &b);
    if (b == 0) {
        printf ("Cannot divide by zero. Goodbye.\n");
        return 1;
    }
    printf ("%0.3f\n", a / b);
    return 0;
}
