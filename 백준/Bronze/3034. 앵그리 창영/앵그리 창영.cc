#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, W ,H;
    int matches;
    cin >> N >> W >> H;


    for (int i = 0; i < N; i++) {
        cin >> matches;
        int lower, upper;
        int box = W * W + H * H;
        if (matches * matches > box){
            cout << "NE\n";
        }
        else {
            cout << "DA\n";
        }
    }
    return 0;
}