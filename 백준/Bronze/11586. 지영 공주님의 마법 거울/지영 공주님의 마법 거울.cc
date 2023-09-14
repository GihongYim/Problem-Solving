#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	vector<string> v;
	string line;
	int num;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> line;
		v.push_back(line);
	}
	cin >> num;
	if (num == 1)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << '\n';
		}
	}
	else if (num == 2)
	{
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = v[i].length() - 1; j >= 0; j--)
			{
				cout << v[i][j];
			}
			cout << '\n';
		}
	}
	else if (num == 3)
	{
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i] << '\n';
		}
	}
	return 0;
}