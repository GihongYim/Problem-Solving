#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer;
    int a_len = 0;
    int b_len = 0;
    int aa = a;
    int bb = b;
    int wedge1 = 0;
    int wedge2 = 0;
    
    if (aa == 0)
        a_len = 1;
    while (aa != 0) {
        a_len++;
        aa /= 10;
    }
    if (bb == 0)
        b_len = 1;
    while (bb != 0) {
        b_len++;
        bb /= 10;
    }
    wedge1 = a;
    for (int i = 0; i < b_len; i++) {
        wedge1 *= 10;
    }
    wedge1 += b;
    
    
    wedge2 = b;
    for (int i = 0; i < a_len; i++) {
        wedge2 *= 10;
    }
    wedge2 += a;
    
    if (wedge1 > wedge2) {
        answer = wedge1;
    } else {
        answer = wedge2;
    }
    return answer;
}