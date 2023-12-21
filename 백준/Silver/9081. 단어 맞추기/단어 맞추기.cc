#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        string str;
        string ret;
        cin >> str;
        int cnt = 0;
        do {
            ret = str;
            if (cnt == 1)
                break;
            cnt++;
        }
        while (next_permutation(str.begin(), str.end()));
        cout << ret << '\n';
    }

    return 0;
}