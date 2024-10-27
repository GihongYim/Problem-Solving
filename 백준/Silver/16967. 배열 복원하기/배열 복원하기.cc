#include <bits/stdc++.h>
using namespace std;

int H, W, X, Y;
// int A[301][301];
int B[601][601];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> H >> W >> X >> Y;

	for (int i = 0; i < H + X; i++) {
		for (int j = 0; j < W + Y; j++) {
			cin >> B[i][j];
		}
	}

	for (int i = X; i < X + H; i++) {
		for (int j = Y; j < Y + W; j++) {
			if (i < H && j < W) {
				B[i][j] -= B[i - X][j - Y];
			}
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << B[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}