#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B, C, D, E;
    int time = 0;
    cin >> A >> B >> C >> D >> E;

    if (A < 0) {
        time += (-A * C);
        time += D;
        A = 0;
    }
    if (A < B) {
        time += (B - A) * E;
    }
    cout << time << '\n';
    return 0;
}