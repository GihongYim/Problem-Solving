#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A[3];
    int B[3] = {0, };
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    B[0] = A[1] + 2 * A[2];
    B[1] = A[0] +  A[2];
    B[2] = 2 * A[0] + A[1];
    int minTime = 0x3f3f3f3f;
    for (int i = 0; i < 3; i++) {
        minTime = min(minTime, B[i]);
    }
    cout << 2 * minTime << '\n';

    return 0;
}