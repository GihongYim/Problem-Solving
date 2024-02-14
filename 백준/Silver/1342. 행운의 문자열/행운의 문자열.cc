#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int cnt = 0;
int len;
int ch[26];

void dfs(string curr, char last, int currLength) {
    if (currLength == len) {
        cnt++;
        return;
    }
    for (int i = 0; i < 26; i++) {
        if (ch[i] == 0)
            continue;
        if ((char)(i + 'a') == last)
            continue;
        ch[i]--;
        dfs(curr + (char)(i + 'a'), (char)(i + 'a'), currLength + 1);
        ch[i]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;

    cin >> str;
    
    fill(ch, ch + 26, 0);
    for (int i = 0; i < str.length(); i++) {
        ch[str[i] - 'a']++;
    }
    len = str.length();
    dfs("", ' ', 0);
    cout << cnt << '\n';
    return 0;
}