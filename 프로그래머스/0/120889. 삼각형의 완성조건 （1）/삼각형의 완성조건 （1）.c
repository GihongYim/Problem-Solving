#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 1;
    int Max = 0;
    int index = -1;
    for (int i = 0; i < sides_len; i++) {
        if (sides[i] > Max) {
            Max = sides[i];
            index = i;
        }
    }
    int remain = 0;
    for (int i = 0; i < sides_len; i++) {
        if (index == i) continue;
        remain += sides[i];
    }
    if (Max >= remain) {
        answer = 2;
    }
    return answer;
}