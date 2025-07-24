#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int tag = 0;
    for(int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
                tag = 1;
        }
        answer += tag;
        tag = 0;
    }
    return answer;
}