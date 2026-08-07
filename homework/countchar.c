#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char* s = (char*)malloc(1024 * sizeof(char));
    int freq[10] = {0};
    scanf("%s", s);
    
    for(int i = 0; s[i] != '\0';i++){
        if(s[i] >= '0' && s[i] <= '9' ){
            freq[s[i] - '0']++;
        }
    }
    
    for(int o = 0; o < 10; o++){
        printf("%d ", freq[o]);
    }
    return 0;
}
