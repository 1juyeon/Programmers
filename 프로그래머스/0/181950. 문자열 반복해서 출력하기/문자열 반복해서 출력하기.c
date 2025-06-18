#include <stdio.h>
#include <string.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    
    int len = strlen(s1);
    
    for (int j=0; j<a; j++){
        for(int i=0; i<len; i++){
            printf("%c", s1[i]);
        } 
    }

    return 0;
}