#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>  

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int my_string_len = strlen(my_string);  
    char swap[1000];
    
    memset(swap, 0, sizeof(char)*my_string_len);
    char* answer = (char*)malloc(sizeof(char)*my_string_len);
    
    
    for(int i=0; i < my_string_len/2; i++){
        swap[i] = my_string[my_string_len - i - 1];
    }
    
    for(int j=my_string_len/2;j<my_string_len;j++){
        swap[j] = my_string[my_string_len - j - 1];
    }
    
    answer = swap;
    return answer;
}