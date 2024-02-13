#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int ch[26];
    string name;
    string palindrome = "";
    string oddCh = "";
    int oddCnt;

    fill(ch, ch + 26, 0);
    
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        ch[name[i] - 'A']++;
    }
    if (name.length() % 2 == 0) {
        oddCnt = 1;
    } else {
        oddCnt = 0;
    }
    for (int i = 0; i < 26; i++) {
        if (ch[i] % 2 == 1) {
            oddCnt++;
            oddCh = (i + 'A');
        }
        if (oddCnt == 2) {
            cout << "I'm Sorry Hansoo\n";
            return 0;
        }
    }
    for (int i = 0; i < 26; i++) {
        while (ch[i] >= 2) {
            palindrome += (i + 'A');
            ch[i] -= 2;
        }
    }
    string tmp = palindrome;
    reverse(tmp.begin(), tmp.end());
    cout << palindrome + oddCh + tmp << '\n';
    return 0;
}