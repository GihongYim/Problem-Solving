#include <bits/stdc++.h>
using namespace std;

typedef struct LOGO
{
	int scores[3];
	int total;
} Logo;

#define MAXN 1000005
Logo logos[MAXN];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < MAXN; i++) {
		logos[i].scores[0] = 0;
		logos[i].scores[1] = 0;
		logos[i].scores[2] = 0;
		logos[i].total = 0;
	}
	
	while (1) {
		for (int i = 0; i < MAXN; i++) {
			logos[i].scores[0] = 0;
			logos[i].scores[1] = 0;
			logos[i].scores[2] = 0;
			logos[i].total = 0;
		}
		int n;
		cin >> n;
		if (n == 0) break;

		for (int p = 0; p < n; p++) {
			int d;

			cin >> d;
			for (int i = 0; i < d; i++) {
				int id;

				cin >> id;
				logos[id].scores[i] += (3 - i);
				logos[id].total += (3 - i);
			}
		}
		int maxIdx = 0;
		int maxScore = 0;
		for (int i = 1; i < MAXN; i++) {
			if (logos[i].total > maxScore) {
				maxScore = logos[i].total;
				maxIdx = i;
			} else if (logos[i].total == maxScore) {
				if (logos[i].scores[0] > logos[maxIdx].scores[0]) {
					maxScore = logos[i].total;
					maxIdx = i;
				} else if (logos[i].scores[0] < logos[maxIdx].scores[0]) {
					continue;
				}
				
				
				if (logos[i].scores[1] > logos[maxIdx].scores[1]) {
					maxScore = logos[i].total;
					maxIdx = i;
				} else if (logos[i].scores[1] < logos[maxIdx].scores[1]) {
					continue;
				}
				
				
				if (logos[i].scores[2] > logos[maxIdx].scores[2]) {
					maxScore = logos[i].total;
					maxIdx = i;
				} else if (logos[i].scores[2] < logos[maxIdx].scores[2]) {
					continue;
				}
			}
		}
		for (int i = 1; i < MAXN; i++) {
			if (logos[i].total == maxScore 
			&& logos[i].scores[0] == logos[maxIdx].scores[0]
			&& logos[i].scores[1] == logos[maxIdx].scores[1]
			&& logos[i].scores[2] == logos[maxIdx].scores[2]
			) {
				cout << i << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}