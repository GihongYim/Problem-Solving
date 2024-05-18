#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(numLog_len);
    answer[numLog_len - 1] = '\0';
    int pos = 0;
    for (int i = 1; i < numLog_len; i++) {
        if (numLog[i - 1] + 1 == numLog[i]) {
            answer[pos++] = 'w';
        } else if (numLog[i - 1] - 1 == numLog[i]) {
            answer[pos++] = 's';
        } else if (numLog[i - 1] + 10 == numLog[i]) {
            answer[pos++] = 'd';
        } else if (numLog[i - 1] - 10 == numLog[i]) {
            answer[pos++] = 'a';
        }
    }
    return answer;
}