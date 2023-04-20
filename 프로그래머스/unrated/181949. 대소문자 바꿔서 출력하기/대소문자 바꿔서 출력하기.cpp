#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    char    ch;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        ch = static_cast<char>(str[i]);
        if (ch >= 'a' && ch <= 'z')
            cout << static_cast<char>(ch - 'a' + 'A');
        else
            cout << static_cast<char>(ch - 'A' + 'a');
    }
    return 0;
}