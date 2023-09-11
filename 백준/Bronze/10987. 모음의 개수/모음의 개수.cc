#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	string aeiou = "aeiou";
	int answer = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (aeiou.find(str[i]) != string::npos)
			answer++;
	}
	cout << answer << '\n';
	return 0;
}