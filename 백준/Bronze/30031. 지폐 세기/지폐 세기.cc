#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;

	cin >> N;

	int width, height;
	int total = 0;
	for (int i = 0; i < N; i++) {
		cin >> width >> height;
		switch (width) {
			case 136:
				total += 1000;
				break;
			case 142:
				total += 5000;
				break;
			case 148:
				total += 10000;
				break;
			case 154:
				total += 50000;
				break;
		}
	}
	cout << total << '\n';

	return 0;
}