#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    char n[10], m[10];
    sprintf(n, "%d%d", a, b);
    sprintf(m, "%d%d", b, a);
    
    return atoi(n) > atoi(m) ? atoi(n) : atoi(m);
}