#include <bits/stdc++.h>
using namespace std;

vector<int> participant[2001];
int score[2001];
int partScore[2001];
int partCnt[2001];
int answer[2001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, T, P;

	cin >> N >> T >> P;

	fill(answer, answer + T + 1, 0);
	for (int i = 1; i <= N; i++)
	{
		participant[i].resize(T + 1);
		for (int j = 1; j <= T; j++) 
		{
			cin >> participant[i][j];
			answer[j] += participant[i][j];
		}
	}

	fill(score, score + T + 1, 0);
	for (int i = 1; i <= T; i++)
	{
		score[i] = N - answer[i];
	}

	fill(partCnt, partCnt + N + 1, 0);
	fill(partScore, partScore + N + 1, 0);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= T; j++) {
			if (participant[i][j]) {
				partScore[i] += score[j];
				partCnt[i]++;
			}
		}
	}
	int pOrder = 1;
	for (int i = 1; i <= N; i++) {
		if (i == P) continue;
		if (partScore[i] > partScore[P]) {
			pOrder++;
		} else if (partScore[i] == partScore[P]) {
			if (partCnt[i] > partCnt[P]) {
				pOrder++;
			} else if (partCnt[i] == partCnt[P]) {
				if (i < P) {
					pOrder++;
				}
			}
		}
	}

	cout << partScore[P] << ' ' << pOrder << '\n';;
	return 0;
}