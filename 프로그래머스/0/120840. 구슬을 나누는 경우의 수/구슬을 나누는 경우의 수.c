#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer = 0;
    int i =0;
    __uint128_t balls_count = 1, share_count = 1, bs_count = 1;
    
    for(i=1; i<=balls; i++){
        balls_count *= i;
    }
    
    for(i=1; i<=share; i++){
        share_count *= i;
    }
    
    for(i=1; i<=balls-share; i++){
        bs_count *= i;
    }
    
    answer = balls_count / (bs_count * share_count);
    return answer;
}