#include <iostream>
using namespace std;

int main(void)
{
    int N;

    int num;
    int answer;

    cin >> N;
    answer = 0;
    for (int i = 1; i <= N; i++) {
        answer += i;
    }
    cout << answer << '\n';
    cout << answer * answer << '\n';
    answer = 0;
    for (int i = 1; i <= N; i++) {
        answer += (i * i * i);
    }
    cout << answer << '\n';
    return 0;
}