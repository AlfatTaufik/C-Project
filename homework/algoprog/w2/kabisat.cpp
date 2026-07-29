#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    printf("%s", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "Kabisat" : "Bukan Kabisat");
    return 0;
}