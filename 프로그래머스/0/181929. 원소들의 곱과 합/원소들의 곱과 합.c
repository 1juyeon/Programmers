#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {

    int sum = 0;
    int mul = 1;
    
    for(int i=0; i<num_list_len; i++){
        mul *= num_list[i];
        sum += num_list[i];

    }
    printf("mul : %d, sum : %d", mul, sum);
    
    if(mul < sum * sum){
        return 1;
    }else if(mul > sum * sum){
        return 0;
    }
    
}