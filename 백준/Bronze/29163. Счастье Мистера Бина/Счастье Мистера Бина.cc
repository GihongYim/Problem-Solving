#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    int N;

    int n;
    a = b = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        if (n % 2)
            a++;
        else
            b++;
    }
    if (a >= b) {
        cout << "Sad\n";
    } else {
        cout << "Happy\n";
    }
}