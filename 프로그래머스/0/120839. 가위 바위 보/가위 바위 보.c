#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(rsp) + 1);
    char *c = rsp;
    int pos = 0;
    while (*c != '\0') {
        if (*c == '2') {
            answer[pos++] = '0';
        } else if (*c == '0') {
            answer[pos++] = '5';
        } else if (*c == '5') {
            answer[pos++] = '2';
        }
        c++;
    }
    answer[pos++] = '\0';
    return answer;
}