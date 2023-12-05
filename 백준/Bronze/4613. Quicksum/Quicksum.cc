#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string line;
    while (1) {
        getline(cin, line);
        if (line == "#")
            break;
        stringstream sin(line);
        int answer = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') continue;
            answer += ((i + 1) * (line[i] - 'A' + 1)); 
        }
        cout << answer << '\n';
    }
    int answer = 0;
    
}