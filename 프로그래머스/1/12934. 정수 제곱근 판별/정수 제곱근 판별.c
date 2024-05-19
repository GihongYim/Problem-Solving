#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    for (long long i = 1; i <= n / i; i++) {
        if (i * i == n) {
            answer = (i + 1) * (i + 1);
            break;
        }
    }
    return answer;
}