#include <stdio.h>
#define LEN_INPUT 1000001
#include <string.h>

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    int len = strlen(s1);
    for(int i=0; i<len; i++){
        printf("%c", s1[i]);
    }
    return 0;
}
