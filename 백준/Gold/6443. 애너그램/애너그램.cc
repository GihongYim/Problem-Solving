#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> anagram;
int cnt[26]; 
void dfs(string curr, int total)
{
    if (total == 0) {
        anagram.push_back(curr);
        return ;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 0)
            continue;
        string next = curr;
        next += (i+ 'a');
        cnt[i]--;
        dfs(curr + char(i + 'a'), total - 1);
        cnt[i]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    string str;
    
    cin >> n;
    for (int t = 0; t < n; t++) {
        cin >> str;
        anagram.clear();
        fill(cnt, cnt + 26, 0);
        for (int i = 0 ; i < str.length(); i++) {
            cnt[str[i] - 'a']++;
        }
        dfs("", str.length());
        for (auto word : anagram) {
            cout << word << '\n';
        }
    }

    return 0;
}