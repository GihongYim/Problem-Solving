#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string name;

    while (getline(cin, name)) {
        for (int i = 0; i < name.length(); i++) {
            if (name[i] == 'e') {
                name[i] = 'i';
            } else if (name[i] == 'i') {
                name[i] = 'e';
            }else if (name[i] == 'E') {
                name[i] = 'I';
            } else if (name[i] == 'I') {
                name[i] = 'E';
            }
        }
        cout << name << '\n';
    }

    return 0;
}