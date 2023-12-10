#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<string> v;
    v.push_back("TTT");
    v.push_back("TTH");
    v.push_back("THT");
    v.push_back("THH");
    v.push_back("HTT");
    v.push_back("HTH");
    v.push_back("HHT");
    v.push_back("HHH");
    map<string, int> m;
    m["TTT"] = 0;
    m["TTH"] = 0;
    m["THT"] = 0;
    m["THH"] = 0;
    m["HTT"] = 0;
    m["HTH"] = 0;
    m["HHT"] = 0;
    m["HHH"] = 0;
    int p;
    string str;

    cin >> p;
    for (int test_case = 1; test_case <= p; test_case++) {
        m["TTT"] = 0;
        m["TTH"] = 0;
        m["THT"] = 0;
        m["THH"] = 0;
        m["HTT"] = 0;
        m["HTH"] = 0;
        m["HHT"] = 0;
        m["HHH"] = 0;
        cin >> str;
        for (int i = 0; i < str.length() - 2; i++) {
            m[str.substr(i, 3)]++;
        }
        for (int i = 0; i < v.size(); i++) {
            cout << m[v[i]] << ' ';
        }
        cout << '\n';
    }
    return 0;
}