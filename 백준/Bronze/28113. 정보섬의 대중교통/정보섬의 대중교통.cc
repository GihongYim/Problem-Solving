#include <iostream>
using namespace std;


int main(void)
{
    int n, a, b;

    cin >> n >> a >> b;
    if (b > a) {
        cout << "Bus\n";
    } else if (b < a) {
        cout << "Subway\n";
    } else {
        cout << "Anything\n";
    }
    return 0;
}