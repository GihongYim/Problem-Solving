#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    string target;
    vector<char> ret;
    int tsize;

    cin >> str;
    cin >> target;

    tsize = target.size();
    bool same;
    for (int i = 0; i < str.size(); i++)
    {
        ret.push_back(str[i]);

        if (ret.size() < target.size())
            continue;
        same = true;
        for (int j = 0; j < tsize; j++)
        {
            if (ret[ret.size() - 1 - j] != target[tsize - 1 - j])
            {
                same = false;
                break;
            }
        }
        if (same)
        {
            for (int j = 0; j < tsize; j++)
                ret.pop_back();
        }
    }
    if (!ret.empty())
    {
        for (int i = 0; i < ret.size();i++)
            cout << ret[i];
    }
    else
    {
        cout << "FRULA";
    }
    cout << '\n';
    return 0;
}