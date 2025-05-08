#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int i,j,temp=0;
    for(i=0; i<array_len; i++){
        for(j=0; j<array_len-1; j++){
            if(array[i]>array[j]){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    return array[array_len/2];
}