#include <stdio.h>

int main(void) {
    int mm,yyyy,dd;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    printf("%d%d%d\n",yyyy,mm,dd);
    return 0;
}