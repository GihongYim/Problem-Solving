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

    map<string, string> m;
    string input;

    m["CU"] = "see you";
    m[":-)"] = "I’m happy";
    m[":-("] = "I’m unhappy";
    m[";-)"] = "wink";
    m[":-P"] = "stick out my tongue";
    m["(~.~)"] = "sleepy";
    m["TA"] = "totally awesome";
    m["CCC"] = "Canadian Computing Competition";
    m["CUZ"] = "because";
    m["TYTY"] = "thank-you";
    m["YW"] = "you’re welcome";
    m["TTYL"] = "talk to you later";

    while (cin >> input) {
        if (m.find(input) == m.end()) {
            cout << input << '\n';
        } else {
            cout << m[input] << '\n';
        }
        
    }
    return 0;
}