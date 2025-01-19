#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int score(char sang, char friendMove) {
	if (sang == friendMove) return 1; 
	if ((sang == 'S' && friendMove == 'P') || 
		(sang == 'P' && friendMove == 'R') || 
		(sang == 'R' && friendMove == 'S')) {
		return 2;
	}
	return 0;
}

int main() {
	int R, N;
	cin >> R;

	string sangMoves;
	cin >> sangMoves;

	cin >> N;
	vector<string> friendsMoves(N);
	for (int i = 0; i < N; ++i) {
		cin >> friendsMoves[i];
	}

	int actualScore = 0;
	for (int r = 0; r < R; ++r) {
		for (int i = 0; i < N; ++i) {
			actualScore += score(sangMoves[r], friendsMoves[i][r]);
		}
	}

	int maxScore = 0;
	for (int r = 0; r < R; ++r) {
		int bestRoundScore = 0;
		for (char move : {'S', 'P', 'R'}) { 
			int currentRoundScore = 0;
			for (int i = 0; i < N; ++i) {
				currentRoundScore += score(move, friendsMoves[i][r]);
			}
			bestRoundScore = max(bestRoundScore, currentRoundScore);
		}
		maxScore += bestRoundScore;
	}

	cout << actualScore << endl;
	cout << maxScore << endl;

	return 0;
}
