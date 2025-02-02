#include <stdio.h>
#include <string.h>

void timeConversion(char time[]) {
    int hour, minute, second;
    char period[3];

    sscanf(time, "%2d:%2d:%2d%2s", &hour, &minute, &second, period);

    if (strcmp(period, "AM") == 0 && hour == 12) {
        hour = 0; 
    } else if (strcmp(period, "PM") == 0 && hour != 12) {
        hour += 12; 
    }
    printf("%02d:%02d:%02d\n", hour, minute, second);
}

int main() {
    char time[10];
    scanf("%s", time); 

    timeConversion(time); 

    return 0;
}
