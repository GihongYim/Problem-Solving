#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(5);
    if (num % 2 == 1 || num % 2 == -1) {
        strcpy(answer, "Odd");
        answer[3] = '\0';
    } else {
        strcpy(answer, "Even");
        answer[4] = '\0';
    }
    return answer;
}