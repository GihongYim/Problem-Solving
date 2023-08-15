#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    string input;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    int d;
    int dist;
    int x, y, nx, ny;
    int N;
    bool ok;
    N = park.size();
    x = y = -1;
    for (int i = 0; i < park.size(); i++) {
        for (int j = 0; j < park[i].size(); j++) {
            if (park[i][j] == 'S') {
                x = i;
                y = j;
            }
        }
        if (x != -1 && y != -1)
            break ;
    }
    for (int i = 0; i < routes.size(); i++) {
        stringstream sin(routes[i]);
        sin >> input;
        if (input == "E") {
            d = 0;
        } else if (input == "W") {
            d = 1;
        } else if (input == "S") {
            d = 2;
        } else if (input == "N") {
            d = 3;
        }
        sin >> dist;
        ok = true;
        for (int j = 1; j <= dist; j++) {
            nx = x + j * dx[d];
            ny = y + j * dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
                ok = false;
                break ;
            }
            if (park[nx][ny] == 'X') {
                ok = false;
                break;
            }
        }
        if (ok) {
            park[x][y] = 'O';
            park[nx][ny] = 'S';
            x = nx;
            y = ny;
        }
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}