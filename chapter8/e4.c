/* If you take the value of N as computed in exercise 2, subtract
 * 621,049 from it, and then take that result modulo 7, you get a
 * number from 0 to 6 that represents the day of the week (Sunday 
 * through Saturday, respectively) on which the particular day falls.
 * For example, the value of N computed fro August 8, 2004, is
 * 732,239 as derived previously.
 * 
 * 732,239 - 621,049 gives 111,190, and 111,190 % 7 gives 2,
 * indicating that this date falls on a Tuesday. 
 * 
 * Use the functions developed in the previous exercise to develop
 * a program that displays the day of the week on which a
 * particular date falls. Make certain that the program displays
 * the day of the week in English, such as "Monday". */

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int f (int year, int month)
{
    if (month <= 2 )
        return year - 1;
    else 
        return year;
}

int g (int month)
{
    if ( month <= 2 )
        return month + 13;
    else 
        return month + 1;
}

int calculateN(struct date date)
{
    int fVal = f(date.year, date.month);
    int gVal = g(date.month);

    return (1461 * fVal) / 4 + (153 * gVal) / 5 + date.day;
}

void determineDay(struct date date)
{
	struct days {
		int day;
		char name[3];
	};
	int i;
	
	const struct days days[7] =
	{ 
		{ 0, { 'S', 'u', 'n' } }, { 1, { 'M', 'o', 'n' } },
		{ 2, { 'T', 'u', 'e' } }, { 3, { 'W', 'e', 'd' } }, 
		{ 4, { 'T', 'h', 'u' } }, { 5, { 'F', 'r', 'i' } }, 
		{ 6, { 'S', 'a', 't' } }
	};

	for ( i = 0; i < 3; ++i )
		printf ("%c", days[(calculateN(date) - 621049) % 7].name[i]);
	
	printf ("\n");
}

int main (void)
{	
	struct date input;

	printf ("Please enter a date (mm/dd/yyyy): ");
	scanf ("%i/%i/%i", &input.month, &input.day, &input.year);
	determineDay(input);
	
    return 0;
}
