#include <iostream>
#include <algorithm>
using namespace std;


#define MAXN 5001
#define ll long long
int N;
ll solution[MAXN];
ll answer[3];
ll answerSum = 10000000005;
void getMinSum(int n) {
    ll offset = solution[n];
    int left = 0;
    int right = N - 1;
    ll tmp;
    while (left < right) {
        if (left == n)
            left++;
        if (right == n)
            right--;
        if (left >= right)
            break;
        tmp = solution[left] + solution[right] + offset;
        if (abs(tmp) < answerSum) {
            answer[0] = solution[left];
            answer[1] = solution[right];
            answer[2] = solution[n];
            answerSum = abs(tmp);
        }
        if (tmp > 0L)
            right--;
        else if (tmp < 0L)
            left++;
        else {
            return;
        }
   
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> solution[i];
    }
    sort(solution, solution + N);
    for (int i = 0; i < N; i++) {
       getMinSum(i); 
    }
    sort(answer, answer + 3);
    cout << answer[0] << ' ' << answer[1] << ' ' << answer[2] << '\n';
    return 0;
}