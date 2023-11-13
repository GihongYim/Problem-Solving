#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	string str;
	int count[91];
	int total;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		fill(count, count + 91, 0);
		total = 0;
		for (int j = 0; j < str.length(); j++) {
			count[str[j]]++;
		}
		for (int j = 65; j < 91; j++) {
			if (count[j] == 0)
				total += j;
		}
		cout << total << '\n';
	}
	return 0;
}