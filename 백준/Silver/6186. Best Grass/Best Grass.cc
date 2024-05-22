#include <stdio.h>


typedef struct Point {
    int x, y;
} point;
int R, C;
int front, end;
point queue[100005];
char map[105][105];
int visited[105][105];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void queueInit() {
    front = 0;
    end = 0;
}

void queuePush(point n) {
    queue[end++] = n;
}

point queuePop() {    
    return queue[front++];
}

int queueEmpty() {
    if (front == end)
        return 1;
    else
        return 0;
}

int isValid(point p) {
    if (p.x < 0 || p.x >= R || p.y < 0 || p.y >= C)
        return 0;
    else
        return 1;
}

void bfs(point p) {
    queueInit();
    queuePush(p);
    visited[p.x][p.y] = 1;
    while (!queueEmpty()) {
        point curr = queuePop();
        // printf("%d %d\n", curr.x, curr.y);
        point nxt;

        for (int d = 0; d < 4; d++) {
            nxt.x = curr.x + dx[d];
            nxt.y = curr.y + dy[d];
            if (!isValid(nxt) || map[nxt.x][nxt.y] == '.') continue;
            if (visited[nxt.x][nxt.y]) continue;
            visited[nxt.x][nxt.y] = 1;
            queuePush(nxt);
        }
    }
}

int main(void)
{
    int count = 0;
    scanf("%d %d\n", &R, &C);
    for (int i = 0; i < R; i++) {
        scanf("%s", map[i]);
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            visited[i][j] = 0;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (visited[i][j]) continue;
            if (map[i][j] == '#') {
                point p;
                p.x = i;
                p.y = j;
                bfs(p);
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}