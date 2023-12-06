#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int freq;

    cin >> freq;

    if (freq >= 620) {
        cout << "Red\n";
    } else if (freq >= 590) {
        cout << "Orange\n";
    } else if (freq >= 570) {
        cout << "Yellow\n";
    } else if (freq >= 495) {
        cout << "Green\n";
    } else if (freq >= 450) {
        cout << "Blue\n";
    } else if (freq >= 425) {
        cout << "Indigo\n";
    } else if (freq >= 380) {
        cout << "Violet\n";
    }
    return 0;
}