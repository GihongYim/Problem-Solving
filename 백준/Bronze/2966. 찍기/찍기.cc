#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string answer;
	vector<string> omr;
	vector<int> score(3);
	vector<string> name(3);
	string person;
	int maxScore = 0;

	cin >> N;
	cin >> answer;

	name[0] = "Adrian";
	name[1] = "Bruno";
	name[2] = "Goran";
	person.clear();
	while (person.length() < N)
		person += "ABC";
	omr.push_back(person);
	person.clear();
	while (person.length() < N)
		person += "BABC";
	omr.push_back(person);
	person.clear();
	while (person.length() < N)
		person += "CCAABB";
	omr.push_back(person);

	
	for (int i = 0; i < 3; i++) {
		score[i] = 0;
		for (int j = 0; j < answer.length(); j++) {
			if (omr[i][j] == answer[j])
				score[i]++;
		}
		maxScore = max(maxScore, score[i]);
	}
	cout << maxScore << '\n';
	for (int i = 0; i < 3; i++) {
		if (maxScore == score[i]) {
			cout << name[i] << '\n';
		}
	}
	return 0;
}        