#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int lv;
	int score;
	string conc;

	cin >> lv >> conc;

	if (conc == "miss") {
		score = 0;
	} else if (conc == "bad") {
		score = 200;
	} else if (conc == "cool") {
		score = 400;
	} else if (conc == "great") {
		score = 600;
	} else if (conc == "perfect") {
		score = 1000;
	}

	cout << lv * score << '\n';
	return 0;
}