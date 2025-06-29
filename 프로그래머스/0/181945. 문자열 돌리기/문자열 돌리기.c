#include <stdio.h>
#define LEN_INPUT 11


int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    
    for (int i = 0; s1[i] != '\0'; i++){
    putchar(s1[i]);
    printf("\n");
    }
    
    return 0;
}
