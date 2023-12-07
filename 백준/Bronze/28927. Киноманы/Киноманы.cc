#include <iostream>
using namespace std;

int main(void)
{
    int Max, Mel;
    int e, f, t;

    cin >> t >> e >> f;
    Max = t * 3 + e * 20 + f * 120;
    cin >> t >> e >> f;
    Mel = t * 3 + e * 20 + f * 120;
    if (Max > Mel) {
        cout << "Max\n";
    } else if (Max < Mel) {
        cout << "Mel\n";
    } else {
        cout << "Draw\n";
    }
}