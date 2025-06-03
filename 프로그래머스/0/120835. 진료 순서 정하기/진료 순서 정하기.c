#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(size_t)*emergency_len);
    int* answer_2 = (int*)malloc(sizeof(size_t)*emergency_len);
    int temp;
    
    for(int a=0; a<emergency_len; a++){
        answer_2[a]=emergency[a];
    }
    
    for(int i=0; i<emergency_len; i++){
        for(int j=0; j<emergency_len; j++){
            if(emergency[i] > emergency[j]){
                temp = emergency[i];
                emergency[i] = emergency[j];
                emergency[j] = temp;
            }
        }
    }
    
    for(int b=0; b<emergency_len; b++){
        for(int c=0; c<emergency_len; c++){
            if(emergency[b]==answer_2[c]){
                answer[c] = b+1;
            }
        }
    }
      
    return answer;
}