#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string m = "aeiouAEIOU";
    string str;
    int cnt;

    while(1)
    {
        getline(cin, str);
        if (str == "#")
            break;
        cnt = 0;   
        for (int i = 0; i < str.size();i++)
        {
            for (int j = 0; j < m.size();j++)
            {
                if (str[i] == m[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}