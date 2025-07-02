#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);
    int len = len_str1 + len_str2;
    
    char* answer = (char*)malloc(sizeof(int)*(len));
    int cnt=0;
    
    for(int i=0; i<len_str1; i++){
        answer[cnt]=str1[i];
        cnt++;
        answer[cnt]=str2[i]; 
        cnt++;
    }
    answer[cnt]='\0';
    
    return answer;
}