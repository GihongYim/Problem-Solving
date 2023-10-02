#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int remainApple = 0;
    int numOfStudent, numOfApple;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numOfStudent >> numOfApple;
        remainApple += (numOfApple % numOfStudent);
    }
    cout << remainApple << '\n';
    return 0;
}