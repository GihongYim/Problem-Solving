#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int alpha[26];
    int lower;
    string line;
    cin >> n;
    getline(cin, line);
    for (int t = 1; t <= n; t++) {
        getline(cin, line);
        fill(alpha, alpha + 26, 0);
        for (int i = 0; i < line.length(); i++) {
            if (isalpha(line[i])) {
                alpha[tolower(line[i]) - 'a']++;
            }
        }
        sort(alpha, alpha + 26);
        lower = alpha[0];
        cout << "Case " << t << ": ";
        if (lower == 1) {
            cout << "Pangram!\n";
        } else if (lower == 2) {
            cout << "Double pangram!!\n";           
        } else if (lower == 3) {
            cout << "Triple pangram!!!\n";           
        } else {
            cout << "Not a pangram\n";
        }
    }
    return 0;
}