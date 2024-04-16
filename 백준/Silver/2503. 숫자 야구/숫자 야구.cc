#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> curr;

void getCurr(string num, int strike, int ball) 
{
    int s, b;
    vector<string> next;
    for (int i = 0; i < curr.size(); i++) {
        s = 0;
        b = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (curr[i][j] == num[k]) {
                    if (j == k)
                        s++;
                    else
                        b++;
                }
            }
        }
        if (s == strike && b == ball) {
            next.push_back(curr[i]);
        }
    }
    curr = next;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;

    string num;
    int strike, ball;

    
    for (int i = 123; i <= 999; i++) {
        int a, b, c;
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a == 0 || b == 0 || c == 0) continue;
        if (a == b || b == c || a == c) continue;
        curr.push_back(to_string(i));
    }

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num >> strike >> ball;
        getCurr(num, strike, ball);
    }
    cout << curr.size();


    return 0;
}