#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 1;
    int my_len = strlen(my_string);
    int suffix_len = strlen(is_suffix);
    int start = my_len - suffix_len;
    for (int i = start; i < my_len; i++) {
        if (my_string[i] != is_suffix[i - start]) {
            answer = 0;
            break;
        }
    }
    return answer;
}