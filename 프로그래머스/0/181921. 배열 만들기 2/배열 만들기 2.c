#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool checkfive(int n) {
    while (n != 0) {
        if (n % 5 != 0)
            return false;
        n /= 10;
    }
    return true;
}

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc((r - l) * 4);
    int pos = 0;
    for (int i = l; i <= r; i++) {
        if (checkfive(i))
            answer[pos++] = i;
    }
    if (pos == 0)
        answer[pos++] = -1;
    return answer;
}