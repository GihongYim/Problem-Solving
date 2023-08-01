#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int arr[100];
	int r,d;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	if (arr[1] - arr[0] == arr[2] - arr[1]) {
		d = arr[1] - arr[0];
		cout << arr[N - 1] + d << '\n';
	} else {
		r = arr[1] / arr[0];
		cout << arr[N - 1] * r << '\n';
	}
	return 0;
}