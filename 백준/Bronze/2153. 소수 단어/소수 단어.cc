#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    int num = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            num += (str[i] - 'a' + 1);
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            num += (str[i] - 'A' + 27);
        }
    }

    if (num == 0) {
        cout << "It is not a prime word.";
    } else {
        if (num == 1 || num == 2) {
            cout << "It is a prime word.";
            return 0;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << "It is not a prime word.";
                return 0;
            }
        }
        cout << "It is a prime word.";
        return 0;
    }
    return 0;
}