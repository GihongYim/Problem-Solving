#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    string str;
    int cnt;
    unordered_map<string, int> hello;

    cin >> N;
    cnt = 0;
    for(int i = 0; i < N;i++)
    {
        cin >>str;
        if (str == "ENTER")
        {
            hello.clear();
        }
        else
        {
            if (!hello[str])
            {
                hello[str] = 1;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return (0);
}