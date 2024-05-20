#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int pos = 0;
    while (my_string[pos] != '\0') {
        if (my_string[pos] >= '0' && my_string[pos] <= '9')
            answer += (my_string[pos] - '0');
        pos++;
    }
    return answer;
}