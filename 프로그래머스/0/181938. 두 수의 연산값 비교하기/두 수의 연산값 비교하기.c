#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int bb = b;
    int b_len = 0;
    int wedge = a;
    while (bb != 0) {
        b_len++;
        bb /= 10;
    }
    for (int i = 0; i < b_len; i++)
        wedge *= 10;
    wedge += b;
    if (wedge >= 2 * a * b)
        answer = wedge;
    else
        answer = 2 * a * b;
    printf("%d %d", wedge, 2 * a * b);
    return answer;
}