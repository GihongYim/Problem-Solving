#include <string>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int x, y, dir;
    int nx, ny, ndir;
    int visited[15][15][4];
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            for (int k = 0; k < 4; k++) {
                visited[i][j][k] = 0;
            }
        }
    }
    x = 0;
    y = 0;
    for (int i = 0; i < dirs.length(); i++) {
        if (dirs[i] == 'U')
            dir = 0;
        else if (dirs[i] == 'R')
            dir = 1;
        else if (dirs[i] == 'D')
            dir = 2;
        else if (dirs[i] == 'L')
            dir = 3;
        nx = x + dx[dir];
        ny = y + dy[dir];
        ndir = (dir + 2)  % 4;
        if (nx < -5 || nx > 5 || ny < -5 || ny > 5)
            continue;
        if (visited[x + 5][y + 5][dir] == 0 && visited[nx + 5][ny + 5][ndir] == 0) {
            answer++;
            visited[nx + 5][ny + 5][ndir] = 1;
            visited[x + 5][y + 5][dir] = 1;
        }
        x = nx;
        y = ny;
        
    }
    return answer;
}