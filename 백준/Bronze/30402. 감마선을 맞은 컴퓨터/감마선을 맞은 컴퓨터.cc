#include <bits/stdc++.h>
using namespace std;

char picture[15][15];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string cat = "";

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			cin >> picture[i][j];
			if (picture[i][j] == 'w') {
				cat = "chunbae\n";
			} else if (picture[i][j] == 'b') {
				cat = "nabi\n";
			} else if (picture[i][j] == 'g') {
				cat = "yeongcheol\n";
			}
		}
	}
	cout << cat << '\n';


	return 0;
}