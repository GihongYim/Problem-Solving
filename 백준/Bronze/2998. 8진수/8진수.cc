#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string bin;
    string answer;
    map<string, string> m;
    m["000"] = "0";
    m["001"] = "1";
    m["010"] = "2";
    m["011"] = "3";
    m["100"] = "4";
    m["101"] = "5";
    m["110"] = "6";
    m["111"] = "7";

    cin >> bin;
    if (bin.length() % 3 == 1)  {
        bin = "00" + bin;
    } else if (bin.length() % 3 == 2) {
        bin = "0" + bin;
    }
    for (int i = 0; i < bin.length(); i += 3) {
        answer += m[bin.substr(i, 3)];
    }
    cout << answer << '\n';
    return 0;
}