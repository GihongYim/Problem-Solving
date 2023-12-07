#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int status = 0;
    int move;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> move;
        status += move;
    }
    if (status > 0) {
        cout << "Right\n";
    } else if (status < 0) {
        cout << "Left\n";
    } else {
        cout << "Stay\n";
    }
}