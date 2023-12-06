#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string num;
    
    cin >> num;
    if (num.find('7') == string::npos && stoi(num) % 7 != 0)
        cout << 0 << '\n';
    if (num.find('7') == string::npos && stoi(num) % 7 == 0)
        cout << 1 << '\n';
    if (num.find('7') != string::npos && stoi(num) % 7 != 0)
        cout << 2 << '\n';
    if (num.find('7') != string::npos && stoi(num) % 7 == 0)
        cout << 3 << '\n';
    return 0;
}