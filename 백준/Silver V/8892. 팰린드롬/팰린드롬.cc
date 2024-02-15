#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T, k;
    string palindrome;
    string str;
    string rev;
    vector<string> v;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> k;
        v.resize(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }
        palindrome = "";
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                if (i == j) continue;
                str = v[i] + v[j];
                rev = str;
                reverse(rev.begin(), rev.end());
                if (str == rev)
                    palindrome = str;
            }
        }
        if (palindrome=="") {
            cout << "0\n";
        } else {
            cout << palindrome << '\n';
        }
    }
    return 0;
}