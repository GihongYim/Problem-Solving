#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> arr(5);
	int			total = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	std::cout << total / 5 << '\n';
	sort(arr.begin(), arr.end());
	std::cout << arr[2] << '\n';
	return 0;
}