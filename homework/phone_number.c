#include <stdio.h>

int main(void) {
    int f_row, s_row, t_row;
    printf("Enter phone number [(xxx) xxx-xxxx)]: ");
    scanf("(%d) %d-%d", &f_row, &s_row, &t_row);
    printf("You have entered: %d.%d.%d", f_row, s_row, t_row);
    return 0;
}