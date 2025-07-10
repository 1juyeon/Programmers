#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int combine(int a, int b){
    int temp = b;
    int multiplier = 1;
    while(temp > 0){
        multiplier *= 10;
        temp /= 10;
    }
    return a * multiplier + b;
}

int solution(int a, int b) {
    int ab = combine(a, b);
    int product = 2 * a * b;
    return ab >= product ? ab : product;
}
