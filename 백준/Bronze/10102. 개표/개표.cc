#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int v;
	string vote;

	int score = 0;
	cin >> v;
	cin >> vote;
	for (int i = 0; i < v; i++)
	{
		if (vote[i] == 'A')
			score--;
		else if (vote[i] == 'B')
			score++;
	}
	if (score < 0)
		cout << "A\n";
	else if (score > 0)
		cout << "B\n";
	else
		cout << "Tie\n";
	return 0;
}