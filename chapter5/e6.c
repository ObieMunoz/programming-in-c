/* Write a program that takes an integer keyed in from the terminal and
 * extracts and displays each digit of the integer in English. So, if the user
 * types in 932, the program should display:
 * nine three two
 *
 * Remember to display "zero" if the user types in just a 0. (Note: This
 * exercise is a hard one!) */ 

#include <stdio.h>

int main (void)
{
    int number, temp, length = 1;

    printf ("Please enter a number.\n");
    scanf ("%i", &number);

    if (number == 0)
        printf ("zero");

    while (number > 0)
    {
        // Set temp to the current number
        temp = number;

        // We need to determine the length of the number, here...
        while (temp >= 10)
        {
            ++length;
            temp = temp / 10;
        }

        // The length is set, so change temp back to the number.
        temp = number;

        // Now we need to extract the first digit of the number.
        for (int i = 0; i < length - 1; ++i)
        {
            temp /= 10;
        }

        // Set the first digit
        int firstDigit = temp;

        // Print the correct word based on the first digit 
        switch (firstDigit)
        {
            case 0:
                printf ("zero");
                break;
            case 1:
                printf ("one");
                break;
            case 2:
                printf ("two");
                break;
            case 3:
                printf ("three");
                break;
            case 4:
                printf ("four");
                break;
            case 5:
                printf ("five");
                break;
            case 6:
                printf ("six");
                break;
            case 7:
                printf ("seven");
                break;
            case 8:
                printf ("eight");
                break;
            case 9:
                printf ("nine");
                break;
            default:
                break;
        }

        int placeValue = firstDigit;
        // We need to remove the first digit from the original number, so
        // we calculate its placement based on the length 
        for (int i = 0; i < length - 1; ++i)
        {
            placeValue *= 10;
        }

        // remove the first digit from the original number
        number -= placeValue;

        printf (" ");

        // reset the length back to 1
        length = 1;
    }
    
    printf ("\n");
    return 0;
}
