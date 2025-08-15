#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int isOnlyZeroOrFive(int num){
    while(num){
        int i = num % 10;
        num /= 10;
        if(i == 5 || i == 0) continue;
        return 0;
    }
    
    return 1;
}

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 1000000);
    
    int i, k;
    for(i = l, k = 0; i <= r; i++){
        if(isOnlyZeroOrFive(i)){
            answer[k++] = i;
        }
    }
    
    if(k == 0) answer[k] = -1;
    
    return answer;
}