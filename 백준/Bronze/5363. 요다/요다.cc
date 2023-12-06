#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    string line, word;

    cin >> N;
    getline(cin, line);
    for (int test_case = 1;  test_case <= N; test_case++){
        getline(cin, line);
        stringstream sin(line);
        vector<string> words;
        while (sin >> word) {
            words.push_back(word);
        }
        for (int i = 2; i < words.size(); i++) {
            cout << words[i] << ' ';
        }
        cout << words[0] << ' ' << words[1] << '\n';
    }
    return 0;
}
