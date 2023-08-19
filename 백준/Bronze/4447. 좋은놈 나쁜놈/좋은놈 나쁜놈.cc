#include <iostream>
#include <string>
#include <vector>
using namespace std;


int getScore(string name) {
	int score = 0;
	for (int i = 0; i < name.length(); i++) {
		if (name[i] == 'g' || name[i] == 'G') {
			score++;
		} else if (name[i] == 'b' || name[i] == 'B'){
			score--;
		}
	}
	return score;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;
	vector<string> v(n);
	int score;
	getline(cin, v[0], '\n');
	for (int i = 0; i < n; i++) {
		getline(cin, v[i], '\n');
		score = getScore(v[i]);
		if (score > 0) {
			cout << v[i] << " is GOOD\n";
		} else if (score < 0) {
			cout << v[i] << " is A BADDY\n";
		} else {
			cout << v[i] << " is NEUTRAL\n";
		}
	}
	return 0;
}