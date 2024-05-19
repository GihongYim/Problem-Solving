#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int attack = 5;
    
    while (hp != 0) {
        while (hp - attack < 0) {
            attack -= 2;
        }
        hp -= attack;
        answer++;
    }
    return answer;
}