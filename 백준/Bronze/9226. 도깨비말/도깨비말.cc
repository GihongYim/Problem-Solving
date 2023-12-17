#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string aeiou = "aeiou";
    string word;

    int i;
    while (1) {
        cin >> word;
        if (word == "#")
            break;
        i = 0;
        while (i < word.length() && aeiou.find(word[i]) == string::npos) {
            i++;
        }
        cout << word.substr(i) + word.substr(0, i) + "ay\n";
    }

    return 0;
}