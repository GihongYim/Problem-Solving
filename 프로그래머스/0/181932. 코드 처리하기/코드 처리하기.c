#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100005);
    int pos = 0;
    int mode = 0;
    int len = strlen(code);
    for (int idx = 0; idx < len; idx++) {
        if (mode == 0) {
            if (code[idx] != '1') {
                if (idx % 2 == 0)
                    answer[pos++] = code[idx];
            } else {
                mode = 1;
            }
        } else {
            if (code[idx] != '1') {
                if (idx % 2 == 1)
                    answer[pos++] = code[idx];
            } else {
                mode = 0;
            } 
        }
    }
    if (pos == 0) {
        answer[0] = 'E';
        answer[1] = 'M';
        answer[2] = 'P';
        answer[3] = 'T';
        answer[4] = 'Y';
        answer[5] = '\0';
    } else {
        answer[pos] = '\0';
    }
    
    return answer;
}