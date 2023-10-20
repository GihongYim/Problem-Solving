#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> W(10);
	vector<int> K(10);
	int kscore, wscore;

	for (int i = 0; i < 10; i++) {
		cin >> W[i];
	}
	sort(W.begin(), W.end());
	for (int i = 0; i < 10; i++) {
		cin >> K[i];
	}
	sort(K.begin(), K.end());
	wscore = W[7] + W[8] + W[9];
	kscore = K[7] + K[8] + K[9];
	cout << wscore << ' ' << kscore << '\n';
	return 0;
}