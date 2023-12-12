#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    int num;

    cin >> str;
    stringstream sin(str);
    if (str[0] == '0') {
        if (str[1] == 'x') {
            sin >> std::hex >> num;
        } else {
            sin >> std::oct >> num;
        }
    } else {
        sin >> num;
    }
    cout << num << '\n';
    return 0;
}