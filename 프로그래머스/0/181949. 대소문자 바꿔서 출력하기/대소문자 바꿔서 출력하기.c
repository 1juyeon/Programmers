#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char str[LEN_INPUT];
    scanf("%s", str);

    for(int i=0; i<LEN_INPUT; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    printf("%s", str);
    return 0;
}
