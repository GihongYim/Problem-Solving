#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, L;
	string str;
	cin >> N;
	for (int t = 1; t <= N; t++)
	{
		cin >> L >> str;
		for (int i = 0; i < L; i++)
			cout << str;
		cout << '\n';
	}
	return 0;
}