#include <stdio.h>
#include <stdlib.h>

int main() {
    int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int num_flights = sizeof(departures) / sizeof(departures[0]);

    int user_hour, user_minute, user_time;
    scanf("%d:%d", &user_hour, &user_minute);
    user_time = (user_hour * 60) + user_minute;
    int lowest_diff = abs(user_time - departures[0]);
    int diff_now;
    int index_low = 0;


    for(int i = 1; i < num_flights; i++){
        diff_now = abs(user_time - departures[i]);
        if(diff_now < lowest_diff){
            lowest_diff = diff_now;
            index_low = i;
        }
    }

    int hour_now = arrivals[index_low] / 60;
    int minute_now = arrivals[index_low] % 60;
    
    printf("User will arrive at %02d:%02d\n", hour_now, minute_now);
    return 0;
}