#include <stdio.h>
#include <string.h>

int main() {
    int hour, minute;
    char time[3];
    printf("Enter a 12-hour time: ", hour, minute);
    scanf("%d:%d %s", &hour, &minute, time);
    if(hour < 24 && hour >= 0 && minute >= 0 && minute < 60){
        if(strcmp(time, "PM") == 0){
            if(hour != 12){
                hour += 12; 
            }
        } 
        if(strcmp(time, "AM") == 0){
            if(hour == 12){ 
                hour = 0;
            }
        }
        printf("In 24 hour format : %02d:%02d", hour, minute);
    } else {
        printf("formatnya salah");
    }
    // hour += 12;

    
    return 0;
}