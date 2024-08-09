#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (1) {
		string num;

		cin >> num;
		if (num == "0")
			break;

		int pos = 1;
		int result = 0;
		int fact = 1;
		for (int i = num.length() - 1; i >= 0; i--) {

			result += ((num[i] - '0') * fact);
			pos++;
			fact *= pos;
		}
		cout << result << '\n';
	}
	return 0;
}