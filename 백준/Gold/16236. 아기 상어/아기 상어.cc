#include <stdio.h>

const int MAX = 21;
const int INF = 0x3f3f3f3f;
typedef struct Point {
    int x, y;
} point;

int N;
int map[MAX][MAX];
int dist[MAX][MAX];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int sharkSize, sharkEat;
int sharkX, sharkY;

point queue[500];
int front;
int end;

int sec = 0;



void queueInit() {
    front = 0;
    end = 0;
}

int queueEmpty() {
    if (front == end) {
        return 1;
    } else {
        return 0;
    }
}

void queuePush(point p) {
    queue[end++] = p;
}

point queuePop() {
    return queue[front++];
}

int isValid(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N)
        return 0;
    else
        return 1;
}


int bfs() {
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dist[i][j] = INF;
        }
    }
    queueInit();

    point curr;
    curr.x = sharkX;
    curr.y = sharkY;
    // printf("%d %d\n", sharkX, sharkY);
    dist[curr.x][curr.y] = 0;
    queuePush(curr);

    while (!queueEmpty()) {
        curr = queuePop();
        // printf("%d %d\n", curr.x, curr.y);
        for (int d = 0; d < 4; d++) {
            point nxt;
            nxt.x = curr.x + dx[d];
            nxt.y = curr.y + dy[d];
            if (!isValid(nxt.x, nxt.y)) continue;
            if (dist[curr.x][curr.y] + 1 >= dist[nxt.x][nxt.y]) continue;
            if (map[nxt.x][nxt.y] > sharkSize) continue;
            dist[nxt.x][nxt.y] = dist[curr.x][curr.y] + 1;
            queuePush(nxt);
        }
    }
    int minDist = INF;
    int minX = -1;
    int minY = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dist[i][j] < INF && map[i][j] > 0 && map[i][j] < sharkSize) {
                if (dist[i][j] < minDist) {
                    minDist = dist[i][j];
                    minX = i;
                    minY = j;
                }
            }
        }
    }
    // printf("bfs end\n");
    // printf("minX: %d, minY : %d\n", minX, minY);
    // printf("sharSize = %d\n", sharkSize);
    // printf("map[3][0] = %d\n", map[3][0]);
    // printf("dist[3][0] = %d\n", dist[3][0]);
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         printf("%d ", map[i][j]);
    //     }
    //     printf("\n");
    // }
    if (minDist == INF) {
        return 0;
    } else {
        sharkX = minX;
        sharkY = minY;
        map[sharkX][sharkY] = 0;
        sec += minDist;
        return 1;
    }
}

int main(void)
{
    scanf("%d\n", &N);
    sharkX = -1;
    sharkY = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &map[i][j]);
            if (map[i][j] == 9) {
                sharkX = i;
                sharkY = j;
                map[i][j] = 0;
            }
        }
    }
    sharkSize = 2;
    sharkEat = 0;
    while (bfs()) {
        sharkEat += 1;
        if (sharkSize == sharkEat) {
            sharkSize += 1;
            sharkEat = 0;
        }
    }
    printf("%d\n", sec);
}