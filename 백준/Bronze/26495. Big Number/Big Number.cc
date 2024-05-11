#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string number[10][5];
    number[0][0] = "0000";
    number[0][1] = "0  0";
    number[0][2] = "0  0";
    number[0][3] = "0  0";
    number[0][4] = "0000";

    number[1][0] = "   1";
    number[1][1] = "   1";
    number[1][2] = "   1";
    number[1][3] = "   1";
    number[1][4] = "   1";

    number[2][0] = "2222";
    number[2][1] = "   2";
    number[2][2] = "2222";
    number[2][3] = "2";
    number[2][4] = "2222";

    number[3][0] = "3333";
    number[3][1] = "   3";
    number[3][2] = "3333";
    number[3][3] = "   3";
    number[3][4] = "3333";

    number[4][0] = "4  4";
    number[4][1] = "4  4";
    number[4][2] = "4444";
    number[4][3] = "   4";
    number[4][4] = "   4";

    number[5][0] = "5555";
    number[5][1] = "5";
    number[5][2] = "5555";
    number[5][3] = "   5";
    number[5][4] = "5555";

    number[6][0] = "6666";
    number[6][1] = "6";
    number[6][2] = "6666";
    number[6][3] = "6  6";
    number[6][4] = "6666";

    number[7][0] = "7777";
    number[7][1] = "   7";
    number[7][2] = "   7";
    number[7][3] = "   7";
    number[7][4] = "   7";

    number[8][0] = "8888";
    number[8][1] = "8  8";
    number[8][2] = "8888";
    number[8][3] = "8  8";
    number[8][4] = "8888";

    number[9][0] = "9999";
    number[9][1] = "9  9";
    number[9][2] = "9999";
    number[9][3] = "   9";
    number[9][4] = "   9";

    string str;
    int n;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        n = str[i] - '0';
        for (int j = 0; j < 5; j++) {
            cout << number[n][j] << "\n";
        }
        cout << '\n';
    }
    return 0;
}