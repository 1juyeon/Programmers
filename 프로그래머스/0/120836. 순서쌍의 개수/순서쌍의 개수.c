#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp=0;
    int cnt=0;
    
    for(int i=1; i<n+1; i++){
        temp=n/i;
        if(i*temp==n) {
            answer++;
        }
    }

    return answer;
}