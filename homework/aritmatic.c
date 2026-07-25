#include <stdio.h>
int main() {
    int i, j;
    i = 7;
    j += (i = 2.5);
    // j = i += i;

    printf("%d %d \n", i, j);
    return 0;
}