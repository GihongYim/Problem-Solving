#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 77 == 0 )  {
            printf("Wiwat!\n");
        } else if (i % 7 == 0) {
            printf("Hurra!\n");
        } else if (i % 11 == 0) {
            printf("Super!\n");
        }else {
            printf("%d\n", i);
        }
    }
    return 0;
}