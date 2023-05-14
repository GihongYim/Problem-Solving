#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> n;
	int			num;
	int			total = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> num;
		if (num % 2 == 1)
		{
			n.push_back(num);
			total += num;
		}
	}
	if (n.empty())
	{
		cout << -1;
		return 0;
	}
	sort(n.begin(), n.end());
	cout << total << '\n' << n[0];
	return 0;
}