#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int D;

vector<vector<ll> > adj = {
	{0, 1, 1, 0, 0, 0, 0, 0},
	{1, 0, 1, 1, 0, 0, 0, 0},
	{1, 1, 0, 1, 1, 0, 0, 0},
	{0, 1, 1, 0, 1, 1, 0, 0},
	{0, 0, 1, 1, 0, 1, 0, 1},
	{0, 0, 0, 1, 1, 0, 1, 0},
	{0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 1, 0, 1, 0}
};

vector<vector<ll> > matrixMultiply(const vector<vector<ll>>& M1, const vector<vector<ll>> M2) {
	vector<vector<ll>> ret(8, vector<ll>(8));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			ll tmp = 0;
			for (int k = 0; k < 8; k++) {
				tmp += (M1[i][k] * M2[k][j]);
				tmp %= 1000000007;
			}
			ret[i][j] = tmp % 1000000007;
		}
	}
	return ret;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> D;

	vector<vector<ll> > answer(8, vector<ll>(8));
	for (int i = 0; i < 8; i++) {
		answer[i][i] = 1;
	}
	vector<vector<ll> > f = adj;
	while (D > 0) {
		if (D % 2 == 1) {
			answer = matrixMultiply(answer, f);
			D -= 1;
		}
		f = matrixMultiply(f, f);
		D /= 2;
	}
	cout << answer[0][0] << '\n';
	return 0;
}