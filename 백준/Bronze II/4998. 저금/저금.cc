#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double N, M, B;
    int year;

    while (cin >> N >> B >> M) {
        year = 0;
        B /= 100;
        while (N <= M) {
            N *= (1 + B);
            year++;
        }
        cout << year << '\n';
    }

    return 0;
}
