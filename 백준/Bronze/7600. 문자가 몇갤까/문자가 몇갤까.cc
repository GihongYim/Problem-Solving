#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string line;
    

    while (1) {
        getline(cin, line);
        if (line == "#")
            break;
        set<char> s;
        for (int i = 0; i < line.length(); i++) {
            if (isalpha(line[i])) {
                s.insert(tolower(line[i]));
            }
        }
        cout << s.size() << '\n';
        
    }
    return 0;
}