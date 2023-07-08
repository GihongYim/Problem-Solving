#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string gameResult;
	int numOfWin = 0;
	for (int i = 0; i < 6; i++) {
		cin >>gameResult;
		if (gameResult == "W")
			numOfWin++;
	}
	if (numOfWin == 0)
		cout << "-1\n";
	else if (numOfWin <= 2)
		cout << "3\n";
	else if (numOfWin <= 4)
		cout << "2\n";
	else if (numOfWin <= 6)
		cout << "1\n";
	return 0;
}