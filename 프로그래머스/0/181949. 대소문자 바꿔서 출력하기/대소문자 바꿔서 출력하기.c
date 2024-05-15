#include <stdio.h>
#include <string.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int len = strlen(s1);
    for (int i = 0; i < len; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] -= 'a';
            s1[i] += 'A';
        } else {
            s1[i] -= 'A';
            s1[i] += 'a';
        }
    }
    printf("%s", s1);
    return 0;
}
