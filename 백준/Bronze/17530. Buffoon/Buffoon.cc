#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int arr[100005];
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++) {
		if (arr[0] < arr[i]) {
			cout << "N\n";
			return 0;
		}
	}
	cout << "S\n";
	return 0;
}