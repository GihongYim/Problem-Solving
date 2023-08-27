#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long answer;
	long long num;
	string op;

	cin >> answer;
	while (1)
	{
		cin >> op;
		if (op == "+")
		{
			cin >> num;
			answer += num;
		}
		else if (op == "-")
		{
			cin >> num;
			answer -= num;
		}
		else if (op == "*")
		{
			cin >> num;
			answer *= num;
		}
		else if (op == "/")
		{
			cin >> num;
			answer /= num;
		}
		else if (op == "=")
		{
			break;
		}
	}
	cout << answer << '\n';
	return 0;
}