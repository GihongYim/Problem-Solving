#include <iostream>
#include <algorithm>
using namespace std;

// Compiler version g++ 6.3.0

int main()
{
	int n;
	long long line[3];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> line[0] >> line[1] >> line[2];
		sort(line, line + 3);
		cout << "Scenario #" << i + 1 << ":\n";
		if (line[0] * line[0] + line[1] * line[1] == line[2] * line[2])
			cout << "yes\n\n";
		else
			cout << "no\n\n";
	}
	return 0;
}