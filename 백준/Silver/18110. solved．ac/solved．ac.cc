#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int total;

	cin >> n;
	if (n == 0)
	{
		cout << 0 << '\n';
		return 0;
	}

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int deleted = (n * 0.15 + 0.5);
	total = 0;
	for (int i = deleted; i < n - deleted; i++)
	{
		total += v[i];
	}
	cout << (int)(total / (n - deleted * 2.0) + 0.5) << endl;

	return 0;

}