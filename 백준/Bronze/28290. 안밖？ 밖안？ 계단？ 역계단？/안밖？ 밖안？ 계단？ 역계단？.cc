#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<string, string> m;
    string cmd;

    m.insert(make_pair("fdsajkl;", "in-out"));
    m.insert(make_pair("jkl;fdsa", "in-out"));
    m.insert(make_pair("asdf;lkj", "out-in"));
    m.insert(make_pair(";lkjasdf", "out-in"));
    m.insert(make_pair("asdfjkl;", "stairs"));
    m.insert(make_pair(";lkjfdsa", "reverse"));

    cin >> cmd;

    if (m.find(cmd) == m.end()) {
        cout << "molu\n";
    } else {
        cout << m[cmd] << '\n';
    }
    return 0;
}