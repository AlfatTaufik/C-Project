#include <stdio.h>

int main() {
    char nama[] = "";
    scanf("%[^\n]", &nama);
    printf("Halo, %s!\n", nama);
    return 0;
}
