#include <stdio.h>

int main(void) {
    int prefix, group, code, number_code, check_digit;
    printf("Enter ISBN (prefix-group-code-number-checkdigit): ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &code, &number_code, &check_digit);
    printf("GSI Prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number_code);
    printf("Check digit: %d\n", check_digit);
    return 0;
}