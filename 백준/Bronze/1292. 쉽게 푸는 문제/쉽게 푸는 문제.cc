#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int A, B;
    vector<int> v;
    int sum = 0;

    cin >> A >> B;

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if (v.size() == B)
                break;
            v.push_back(i);
        }
        if (v.size() == B) {
            break;
        }
    }
    for (int i = A - 1; i < B; i++) {
        sum += v[i];
    }
    cout << sum << '\n';
    return 0;
}