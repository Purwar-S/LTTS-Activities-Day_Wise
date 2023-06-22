/*
Compute Total Seconds
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    const char* timeString = "12:34:56"; // Example time string
    char* token;
    int hours, minutes, seconds;
    token = strtok((char*)timeString, ":");
    hours = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    printf("Total seconds: %d\n", totalSeconds);
    
    return 0;
}
