#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2);
    memset(answer, 0, sizeof(int)*2);

    
    answer[0] = money/5500;
    answer[1] = money%5500;

    
    return answer;
}