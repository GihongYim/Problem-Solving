#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char shape;
    int shapeIndex;
    int num;
    map<char, int> card;
    card['P'] = 0;
    card['K'] = 1;
    card['H'] = 2;
    card['T'] = 3;
    map<int, int> m[4];
    while (cin >> shape) {
        cin >> num;
        shapeIndex = card[shape];
        if (m[shapeIndex].find(num) != m[shapeIndex].end()) {
            cout << "GRESKA\n";
            return 0;
        }
        m[shapeIndex].insert({num, 1});
    }
    for (int i = 0; i < 4; i++) {
        cout << 13 - m[i].size() << ' ';
    }
    return 0;
}