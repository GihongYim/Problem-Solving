#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string input;
    string result;
    char prev;

    int T;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> input;
        result = input[0];
        prev = input[0];
        for (int i = 1; i < input.length(); i++) {
            if (input[i] != prev) {
                result += input[i];
                prev = input[i];
            }
        }
        cout << result << '\n';
    }

    return 0;
}