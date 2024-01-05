#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a_attack, a_life;
	int b_attack, b_life;

	cin >> a_attack >> a_life;
	cin >> b_attack >> b_life;

	while (a_life > 0 && b_life > 0) {
		a_life -= b_attack;
		b_life -= a_attack;
	}
	if (a_life <= 0 && b_life <= 0) {
		cout << "DRAW\n";
	} else if (a_life <= 0) {
		cout << "PLAYER B\n";
	} else if (b_life <= 0) {
		cout << "PLAYER A\n";
	}
	return 0;
}