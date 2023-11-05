/* Write a function elapsed_time that takes as its arguments two time 
 * structures and returns a time structure that represents the elapsed 
 * time ( in hours, minutes, and seconds ) between the two times. 
 *
 * So the call elapsed_time (time1, time2) 
 *
 * where time1 represents 3:45:15 and time2 represents 9:44:03 should
 * return a time structure that represents 5 hours, 58 minutes, and 48
 * seconds. Be careful with times that cross midnight. */ 

#include <stdio.h>

struct time 
{
    int hour;
    int minutes;
    int seconds;
} time1, time2;

struct time compareTimes (struct time time1, struct time time2)
{
    struct time returnTime;
    int seconds1, seconds2, difference;

    // We need to convert the times to seconds
    seconds1 = time1.hour * 60 * 60 + time1.minutes * 60 + time1.seconds;
    seconds2 = time2.hour * 60 * 60 + time2.minutes * 60 + time2.seconds;

    difference = seconds2 - seconds1;
    if (seconds2 < seconds1)
        difference += 86400; // if we crossed midnight, we need to add a full
                             // of seconds into the calculation!

    // Now we need to convert the seconds back into the hh:mm:ss format
    returnTime.seconds = difference % 60;
    difference -= returnTime.seconds;
    difference /= 60;
    returnTime.minutes = difference % 60;
    difference -= returnTime.minutes;
    difference /= 60;
    returnTime.hour = difference;

    printf ("Time1: %.2i:%.2i:%.2i\n", 
            time1.hour, time1.minutes, time1.seconds);
    printf ("Time2: %.2i:%.2i:%.2i\n", 
            time2.hour, time2.minutes, time2.seconds);

    printf ("returnTime: %.2i:%.2i:%.2i\n",
            returnTime.hour, returnTime.minutes, returnTime.seconds);

    return returnTime;
};

int main (void)
{
    time1.hour = 3;
    time1.minutes = 45;
    time1.seconds = 15;

    time2.hour = 9;
    time2.minutes = 44;
    time2.seconds = 3;

    struct time time3 = { 22, 59, 02 };
    struct time time4 = { 02, 9, 37 };
    compareTimes(time1, time2);
    compareTimes(time4, time3);
    compareTimes(time3, time4);
    return 0;
}
