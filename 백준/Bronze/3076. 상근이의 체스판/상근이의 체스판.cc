#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int r,c,a,b;
    int row_size, col_size;
    char board[101][101];
    char color;
    cin >> r >> c;
    cin >> a >> b;
    row_size = r * a;
    col_size = c * b;
    for (int row = 0; row < r; row++) {
        if (row % 2 == 0)
            color = 'X';
        else
            color = '.';
        for (int col = 0; col < c; col++) {
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < b; j++) {
                    board[row * a + i][col * b + j] = color;
                }
            }
            if (color == 'X')
                color = '.';
            else
                color = 'X';
        }
        

    }
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}