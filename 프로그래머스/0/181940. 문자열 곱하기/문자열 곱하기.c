#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = strlen(my_string);
    char* answer = (char*)malloc(len * k + 1);  // +1 for '\0'

    if (answer == NULL) return NULL;  // 메모리 할당 실패 처리

    // 초기화
    answer[0] = '\0';

    for (int i = 0; i < k; i++) {
        strcat(answer, my_string);
    }
    
    return answer;
}