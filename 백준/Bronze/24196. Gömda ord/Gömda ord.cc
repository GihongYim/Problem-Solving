#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string input;
    string output;

    cin >> input;
    int idx = 0;
    while (1) {
        if ((size_t)idx == input.size() - 1) break;
        output += input[idx];
        idx += input[idx] - 'A' + 1;
    }

    output += input[input.size() - 1];
    cout << output << '\n';
    return 0;
}