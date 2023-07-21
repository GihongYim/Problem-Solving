#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int num;
	int total;
	cin >> n;
	total = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		total += num;
	}
	if (total % 3 == 0)
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}