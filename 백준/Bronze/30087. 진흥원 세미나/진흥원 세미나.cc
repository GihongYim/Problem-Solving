#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<string, string> m;

    m["Algorithm"] = "204";
    m["DataAnalysis"] = "207";
    m["ArtificialIntelligence"] = "302";
    m["CyberSecurity"] = "B101";
    m["Network"] = "303";
    m["Startup"] = "501";
    m["TestStrategy"] = "105";

    int N;

    cin >> N;
    string c;
    for (int i = 0; i < N; i++) {
        cin >> c;
        cout << m[c] << '\n';
    }
    return 0;
}