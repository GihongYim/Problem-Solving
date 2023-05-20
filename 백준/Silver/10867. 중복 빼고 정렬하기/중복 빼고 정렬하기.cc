#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	set<int> s;
	int num;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		s.insert(num);
	}
	for (auto it : s)
		cout << it << ' ';
	cout << '\n';
	return 0;
}