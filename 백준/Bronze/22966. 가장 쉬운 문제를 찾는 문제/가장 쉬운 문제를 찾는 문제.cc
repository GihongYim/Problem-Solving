#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string name;
	int score;
	string target;
	int targetscore = 1000;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name >> score;
		if (score < targetscore) {
			targetscore = score;
			target = name;
		}
	}
	cout << target << '\n';
	return 0;
}