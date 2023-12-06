#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;

int main(void)
{
    string all =  "Never gonna give you up Never gonna let you down Never gonna run around and desert you Never gonna make you cry Never gonna say goodbye Never gonna tell a lie and hurt you Never gonna stop";
    string word;
    set<string> s;
    stringstream sin(all);
    while (sin >> word) {
        s.insert(word);
    }

    int N;
    string line;
    cin >> N;
    getline(cin, line);
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        stringstream ssin(line);
        while (ssin >> word) {
            if (s.find(word) == s.end()) {
                cout << "Yes\n";
                return 0;                
            }
        }
    }
    cout << "No\n";
    return 0;
}
