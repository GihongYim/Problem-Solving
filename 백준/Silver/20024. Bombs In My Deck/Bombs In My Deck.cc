#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    double answer = 0.0;
    double prob = 1.0;

    for (int k = 0; k <= B; k++) {

        if (5 * k >= C)
            break;

        if (k < B) {

            double p_non_bomb = double(A - B) / double(A - k);
            answer += prob * p_non_bomb;


            prob *= double(B - k) / double(A - k);
        } else {

            answer += prob;
        }
    }

    cout.precision(9);
    cout << fixed << answer << endl;
}
