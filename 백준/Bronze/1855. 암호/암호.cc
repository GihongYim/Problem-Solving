#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int K;
	int div;
	string str;
	string map[300];
	string decode;

	cin >> K;
	cin >> str;
	div = str.length() / K;
	for (int i = 0; i < div; i++) {
		map[i] = str.substr(i * K, K);
		if (i % 2 == 1) {
			reverse(map[i].begin(), map[i].end());
		}
	}
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < div; j++) {
			cout << map[j][i];
		}
	}
	cout << endl;
	return 0;
}