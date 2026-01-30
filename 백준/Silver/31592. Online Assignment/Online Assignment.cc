#include <bits/stdc++.h>
using namespace std;

int main()
{
    string submit = "ttttt";
    string result = "";
    int c;

    cout << submit << '\n';
    flush(cout);

    cin >> result;
    if (result == "completed") 
        return 0;
    cin >> c;

    int changeNum = 5 - c;
    
    for (int i = 0; i < changeNum; i++) {
        submit[i] = 'f';
    }

    vector<string> candidate;

    for (int i = 0; i < 32; i++) {
        string temp = submit;
        int cnt = 0;
        for (int j = 0; j < 5; j++) {
            if (i & (1 << j)) {
                temp[j] = 't';
                cnt++;
            } else {
                temp[j] = 'f';
            }
        }
        if (cnt == c) {
            candidate.push_back(temp);
        }
    }

    for (const auto& s : candidate) {
        submit = s;
        cout << submit << '\n';
        flush(cout);
        cin >> result;
        if (result == "completed")
            return 0;

        cin >> c;
    }

    return 0;
}