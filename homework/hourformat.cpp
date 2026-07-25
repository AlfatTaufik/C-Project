#include <stdio.h>

int main() {
    int jam, menit;
    printf("Hour in 24 format (hh:mm): ");
    scanf("%d:%d", &jam, &menit);
    printf("Hour in 12 format : ");
    if(jam > 12){
        printf("Jam %02d:%02d PM\n", jam - 12, menit);
    } else {
        printf("Jam %02d:%02d AM\n", jam, menit);
    }
    return 0;
}