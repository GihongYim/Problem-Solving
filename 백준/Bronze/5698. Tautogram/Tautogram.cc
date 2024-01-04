#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string line;
    string word;
    char first;
    string result;
    while (1)
    {
        getline(cin, line);
        if (line == "*")
            break;
        stringstream sin(line);
        sin >> word;
        first = tolower(word[0]);
        result = "Y\n";
        while (sin >> word) {
            if (first != tolower(word[0])) {
                result = "N\n";
                break;
            }
        }
        cout << result;
    }
    return 0;
}
