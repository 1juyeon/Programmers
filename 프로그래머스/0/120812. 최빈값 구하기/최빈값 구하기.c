#include <stdio.h>

int solution(int array[], size_t array_len) {
    int count[1000] = {0};  // 배열 값은 0 이상 999 이하이므로 1000개로 선언
    int max_count = 0;      // 최빈값 빈도 수 저장
    int mode = -1;          // 최빈값 (결과 값)
    int multiple = 0;       // 최빈값이 여러 개인지 여부

    // 각 숫자의 등장 횟수를 count 배열에 저장
    for (int i = 0; i < array_len; i++) {
        count[array[i]]++;
    }

    // 최빈값 찾기
    for (int i = 0; i < 1000; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode = i;
            multiple = 0;  // 새로운 최대 빈도 발견 시 중복 초기화
        } else if (count[i] == max_count && max_count != 0) {
            multiple = 1;  // 동일한 빈도 수 발견
        }
    }

    // 최빈값이 여러 개일 경우 -1 반환
    if (multiple) return -1;

    return mode;
}
