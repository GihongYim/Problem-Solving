#include <stdio.h>

char map[10000][10000];

void triangle(int n, int x, int y) {
    if (n == 3) {
        map[x][y] = '*';
        map[x + 1][y - 1] = '*';
        map[x + 1][y + 1] = '*';
        for (int i = -2; i <= 2; i++) {
            map[x + 2][y - i] = '*';
        }
        return ;
    }
    triangle(n / 2, x, y);
    triangle(n / 2, x + n / 2, y - n / 2);
    triangle(n / 2, x + n / 2, y + n / 2);
}

int main(void)
{
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N  - 1; j++) {
            map[i][j] = ' ';
        }
    }
    triangle(N, 0, N - 1);

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 *  N - 1; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}