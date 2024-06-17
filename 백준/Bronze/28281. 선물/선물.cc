#include <bits/stdc++.h>
using namespace std;

int A[100005];
int cum[100005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x;

	cin >> n >> x;
	cin >> A[0];
	for (int i = 1; i < n; i++) {
		cin >> A[i];
		cum[i] = A[i - 1] + A[i];
	}
	int minValue = 0x3f3f3f3f;
	int minIndex = -1;

	for (int i = 1; i < n; i++) {
		if (cum[i] < minValue) {
			minValue = cum[i];
			minIndex = i;
		}
	}
	cout << cum[minIndex] * x << '\n';

	return 0;
}
