#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    string a, b;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> a;
        cin >> b;
        int dist = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i])
                dist++;
        }
        cout << "Hamming distance is " << dist << ".\n";
    }
    return 0;
}