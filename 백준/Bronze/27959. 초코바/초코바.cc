#include <iostream>
using namespace std;

int main(void)
{
    int N, M;

    cin >> N >> M;
    if (M <= N * 100) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}