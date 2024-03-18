#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string game;
	cin >> game;
	int a = 0;
	int b = 0;
	
	for (int i = 0; i < game.length(); i+=2 ){
		if (game[i] == 'A') {
			a += (game[i + 1] - '0');
		} else {
			b += (game[i + 1] - '0');
		}
		if (a >= 10 && b >= 10) {
			if (a - b >= 2) {
				cout << "A\n";
				return 0;
			} else if (b - a >= 2) {
				cout << "B\n";
				return 0;
			}
		} else if (a >= 11) {
			cout << "A\n";
			return 0;
		} else if (b >= 11) {
			cout << "B\n";
			return 0; 
		}
	}

	return 0;
}