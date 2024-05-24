#include <stdio.h>



int main(void)
{
    char str[1000005];
    char *token = "aeios";
    char crypt[5] = {'4', '3', '1', '0', '5'};
    scanf("%s", str);
    int i = 0;
    while (*(str + i) != '\0') {
        for (int j = 0; j < 5; j++) {
            if (str[i] == token[j]) {
                str[i] = crypt[j];
                break;
            }
        }
        i++;
    }
    printf("%s", str);
    return 0;
}