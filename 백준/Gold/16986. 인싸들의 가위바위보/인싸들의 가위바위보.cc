#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N, K;
int a[10][10];
int person[3][20];
int personIndex[3];
int score[3];
bool visited[10];
bool win = false;

void dfs(int round, int left, int right, int sub) {
    if (win)
        return;
    if (score[0] == K) {
        win = true;
        return;
    }
    if (score[1] == K || score[2] == K) {
        return;
    }
    if (round > 3 * (K - 1) + 1) {
        return;
    }
    if (sub == 0) {
        int match = a[person[left][personIndex[left]]][person[right][personIndex[right]]];
        personIndex[left]++;
        personIndex[right]++;
        if (match == 2) {
            score[left]++;
            dfs(round + 1, left, sub, right);
            score[left]--;
        } else if (match == 0) {
            score[right]++;
            dfs(round + 1, right, sub, left);
            score[right]--;
        } else if (match == 1) {
            if (left < right) {
                score[right]++;
                dfs(round + 1, right, sub, left);
                score[right]--;
            } else {
                score[left]++;
                dfs(round + 1, left, sub, right);
                score[left]--;
            }
        }
        personIndex[left]--;
        personIndex[right]--;
    } else {
        if (left == 0) {
            for (int i = 1; i <= N; i++) {
                if (visited[i]) continue;
                int match = a[i][person[right][personIndex[right]]];
                visited[i] = true;
                personIndex[left]++;
                personIndex[right]++;
                if (match == 2) {
                    score[left]++;
                    dfs(round + 1, left, sub, right);
                    score[left]--;
                } else if (match == 0) {
                    score[right]++;
                    dfs(round + 1, right, sub, left);
                    score[right]--;
                } else if (match == 1) {
                    if (left < right) {
                        score[right]++;
                        dfs(round + 1, right, sub, left);
                        score[right]--;
                    } else {
                        score[left]++;
                        dfs(round + 1, left, sub, right);
                        score[left]--;
                    }
                }
                personIndex[left]--;
                personIndex[right]--;
                visited[i] = false;
            }
        } else {
            for (int i = 1; i <= N; i++) {
                if (visited[i]) continue;
                int match = a[person[left][personIndex[left]]][i];
                personIndex[left]++;
                personIndex[right]++;
                visited[i] = true;
                if (match == 2) {
                    score[left]++;
                    dfs(round + 1, left, sub, right);
                    score[left]--;
                } else if (match == 0) {
                    score[right]++;
                    dfs(round + 1, right, sub, left);
                    score[right]--;
                } else if (match == 1) {
                    if (left < right) {
                        score[right]++;
                        dfs(round + 1, right, sub, left);
                        score[right]--;
                    } else {
                        score[left]++;
                        dfs(round + 1, left, sub, right);
                        score[left]--;
                    }
                    
                }
                personIndex[left]--;
                personIndex[right]--;
                visited[i] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    

    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = 0; j < 20; j++) {
            cin >> person[i][j];
        }
    }
    fill(visited, visited + N + 1, false);
    win = false;
    score[0] = score[1] = score[2] = 0;
    personIndex[0] = personIndex[1] = personIndex[2] = 0;

    dfs(0, 0, 1, 2);
    if (win) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    


    return 0;
}