#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a = 0;
    int b = 0;
    string score;

    cin >> score;
    for (int i = 0; i < score.length(); i++) {
        if (score[i] == 'A')
            a++;
        else
            b++;
    }

    cout << a << " : " << b << '\n';

    return 0;
}