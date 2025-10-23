// Written by Daniel Harrington
// This program converts 24 hour time to 12 hour time

#include <stdio.h>

int main(void)
{
    int hours = 0;
    int minutes = 0;
    
    printf("Please enter 24 hour time: ");
    scanf("%d:%d", &hours, &minutes);

    char * am_pm = "__";

    if (hours > 11) {
        am_pm = "pm";
    }
    else {
        am_pm = "am";
    }
    
    hours = hours % 12;
    if (hours == 0) {
        hours = 12;
    }

    printf("In 12 hour time that is %d:%d%s\n", hours, minutes, am_pm);
    return 0;
}