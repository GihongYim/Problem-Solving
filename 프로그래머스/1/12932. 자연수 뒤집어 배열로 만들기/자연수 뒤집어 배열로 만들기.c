#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    
    int* answer = (int*)malloc(40);
    int pos = 0;
    while (n != 0) {
        answer[pos++] = n % 10;
        n /= 10;
    }
    return answer;
}