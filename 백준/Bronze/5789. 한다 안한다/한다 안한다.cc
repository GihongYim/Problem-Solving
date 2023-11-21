#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string flower;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> flower;
        int right = flower.length() / 2;
        int left = right - 1;
        if (flower[left] == flower[right]) {
            cout << "Do-it\n";
        } else {
            cout << "Do-it-Not\n";
        }
    }
    return 0;
}