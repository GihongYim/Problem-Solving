#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string name;
    string term;
    string weekday;
    string i70;
    string frontrange;
    string holiday;

    getline(cin, name);

    cin >> term >> weekday >> i70 >> frontrange >> holiday;

    int h = 0;
    int m = 0;
    // parse term "H:MM"
    {
        size_t pos = term.find(':');
        h = stoi(term.substr(0, pos));
        m = stoi(term.substr(pos + 1));
    }

    int t = h * 60 + m;
    int delay = 1;
    if (weekday == "sat" || weekday == "sun") {
        delay *= 2;
    }

    if (i70 == "1") {
        delay *= 2;
    }

    if (frontrange == "1") {
        delay *= 3;
    }

    if (holiday == "1") {
        delay *= 3;
    }

    t *= delay;
    cout << t / 60 << ":" << setw(2) << setfill('0') << t % 60 << "\n";

    return 0;
}