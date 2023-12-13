#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int submit;
    while (1) {
        cin >> n;
        if (n == 0)
            break;
        vector<int> v;
        cin >> submit;
        v.push_back(submit);
        int prev = submit;
        for (int i = 1; i < n; i++) {
            cin >> submit;
            if (prev != submit) {
                v.push_back(submit);
            }
            prev = submit;
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << "$\n";
        
    }
    return 0;
}