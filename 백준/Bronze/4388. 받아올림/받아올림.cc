#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (1) {
		string a, b;

		cin >> a >> b;

		if (a == "0" && b == "0")
			break;
		
		int aIndex = a.length() - 1;
		int bIndex = b.length() - 1;

		int carry = 0;
		int carryCnt = 0;
		while(aIndex >= 0 && bIndex >= 0) {

			if (carry + (a[aIndex] - '0') + (b[bIndex] - '0') >= 10) {
				carryCnt++;
				carry = 1;
			} else {
				carry = 0;
			}
			aIndex--;
			bIndex--;

		}
		while (aIndex >= 0) {
			if (carry + (a[aIndex] - '0') >= 10) {
				carryCnt++;
				carry = 1;
			} else {
				carry = 0;
			}
			aIndex--;
		}

		while (bIndex >= 0) {
			if (carry + (b[bIndex] - '0') >= 10) {
				carryCnt++;
				carry = 1;
			} else {
				carry = 0;
			}
			bIndex--;
		}
		cout << carryCnt << '\n';
	}

	return 0;
}