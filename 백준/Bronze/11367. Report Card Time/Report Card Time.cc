#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string name;
	int st_score;
	vector<int> score(9);
	vector<string> grade(9);
	vector<int>::iterator low;

	score[0] = 0;
	score[1] = 60;
	score[2] = 67;
	score[3] = 70;
	score[4] = 77;
	score[5] = 80;
	score[6] = 87;
	score[7] = 90;
	score[8] = 97;

	grade[0] = "F";
	grade[1] = "D";
	grade[2] = "D+";
	grade[3] = "C";
	grade[4] = "C+";
	grade[5] = "B";
	grade[6] = "B+";
	grade[7] = "A";
	grade[8] = "A+";

	cin >> n;
	for (int test = 1; test <= n; test++) {
		cin >> name >> st_score;
		low = upper_bound(score.begin(), score.end(), st_score);
		cout << name << ' ' << grade[low - score.begin() - 1] << '\n';
	}
	return 0;
}