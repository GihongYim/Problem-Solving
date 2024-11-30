#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int score[6] = {13, 7, 5, 3, 3, 2};

	double chuck = 0;
	double engyu = 1.5;

	for (int i = 0; i < 6; i++) {
		int num;

		cin >> num;
		chuck += num * score[i];
	}

	for (int i = 0; i < 6; i++) {
		int num;

		cin >> num;
		engyu += num * score[i];
	}

	if (chuck > engyu) {
		cout << "cocjr0208" << '\n';
	} else {
		cout << "ekwoo" << '\n';
	}

	return 0;
}