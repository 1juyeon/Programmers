#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4] = {a, b, c, d};
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 4; j++){
            int tmp = 0;
            if(arr[i] > arr[j]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    if(arr[0] == arr[3]){
        answer = 1111 * arr[0];
    }else if(arr[0] == arr[2] || arr[1] == arr[3]){
        answer = pow((10 * arr[1]) + (arr[0] + arr[3] - arr[1]), 2);        
    }else if(arr[0] == arr[1] && arr[2] == arr[3]){
        answer = (arr[2] + arr[0]) * abs(arr[2] - arr[0]);
    }else if(arr[0] == arr[1]){
        answer = arr[2] * arr[3];
    }else if(arr[1] == arr[2]){
        answer = arr[0] * arr[3];
    }else if(arr[2] == arr[3]){
        answer = arr[0] * arr[1];
    }else{
        answer = arr[0];
    }
    return answer;
}