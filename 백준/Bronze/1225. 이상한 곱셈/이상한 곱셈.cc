#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string A, B;
    long long result = 0;

    cin >> A >> B;

    for (int i = 0; i < A.length(); i++) {
        for (int j = 0; j < B.length(); j++) {
            result += (A[i] - '0') * (B[j] - '0');
        }
    }
    cout << result << '\n';
    return 0;
}