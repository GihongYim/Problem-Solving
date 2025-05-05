#include <iostream>
using namespace std;

int getNextPlayer(int start, int steps) {
    int pos = (start - 1 + steps - 1) % 4;
    return pos + 1;
}

int main() {
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    int first_sum = A + B;
    int second_sum = C + D;

    int gadong = getNextPlayer(1, first_sum);
    int jindong = getNextPlayer(gadong, second_sum);

    cout << jindong << endl;
    return 0;
}
