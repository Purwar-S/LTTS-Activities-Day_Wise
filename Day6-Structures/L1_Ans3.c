/*
Write a program using structures to calculate the difference 
between two time periods using a user-defined function.
*/

#include <stdio.h>

struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};
typedef struct TimePeriod tp;

tp calculateTimeDifference(tp t1, tp t2) {
    tp difference;
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;
    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;
    return difference;
}

int main() {

    tp t1, t2, difference;
    printf("Enter time period 1 (hours minutes seconds): ");
    scanf("%d %d %d", &(t1.hours), &(t1.minutes), &(t1.seconds));
    printf("Enter time period 2 (hours minutes seconds): ");
    scanf("%d %d %d", &(t2.hours), &(t2.minutes), &(t2.seconds));
    difference = calculateTimeDifference(t1, t2);
    printf("Difference between the two time periods: %d hours %d minutes %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);
    return 0;
}
