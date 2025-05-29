#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    int cnt = n/10;
    
    if(n%10==0||((n>10)&&cnt>1)){
        answer = (n*12000)+(k-cnt) * 2000;
    } else{
        answer =  (n*12000)+(k*2000);
    }
       
    return answer;
}