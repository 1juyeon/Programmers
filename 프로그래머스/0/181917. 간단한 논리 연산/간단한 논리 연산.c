#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool answer1 = true;
    bool answer2 = true;
    
    answer1 = (!x1 && !x2)? false : true;
    answer2 = (!x3 && !x4)? false : true;
    answer = (answer1 && answer2)? true : false;
    return answer;
}