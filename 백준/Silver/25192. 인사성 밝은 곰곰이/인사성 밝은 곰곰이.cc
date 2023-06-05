#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	int N;
	string str;
	map<string, int> m;
	int answer = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "ENTER")
		{
			m.clear();
		}
		else if (m.find(str) == m.end())
		{
			m[str] = 1;
			answer++;
		}
	}
	cout << answer << '\n';
	return 0;
}