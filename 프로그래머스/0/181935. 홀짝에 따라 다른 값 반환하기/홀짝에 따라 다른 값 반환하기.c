#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int sum = 0;
    if(n % 2 != 0){
        for(int i = 1 ; i <= n; i++)
            if(i % 2 != 0)
                sum += i;
    }
    if(n % 2 == 0){
        for(int i = 1 ; i <= n; i++)
            if(i % 2 == 0)
                sum += i*i;
    }
    answer = sum;
    return answer;
}