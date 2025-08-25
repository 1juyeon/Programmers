#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(strlen(my_string) * sizeof(int));
    int j = 0;
    int tmp;
    for(int i = 0; i < strlen(my_string); i++)
        if(my_string[i] >= '0' && my_string[i] <= '9')
            answer[j++] = my_string[i] - '0';
    for(int a = 0; a < j - 1; a++)
        for(int b = a + 1; b < j; b++)
        {
            if(answer[a] > answer[b]){
                tmp = answer[a];
                answer[a] = answer[b];
                answer[b] = tmp;
            }
        }
    return answer;
}