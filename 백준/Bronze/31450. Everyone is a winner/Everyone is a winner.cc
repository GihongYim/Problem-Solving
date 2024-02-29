#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int M, K;
    cin >> M >> K;
    if (M % K == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}