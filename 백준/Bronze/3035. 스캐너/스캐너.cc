#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int r,c,zr,zc;
	string paper[51];
	vector<string> answer;
	string line;
	cin >> r >> c >> zr >> zc;
	for (int i = 0; i < r; i++)
		cin >> paper[i];

	for (int i = 0; i < r; i++) {
		line.clear();
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < zc; k++) {
				line += paper[i][j];
			}
		}
		for (int j = 0; j < zr; j++) {
			answer.push_back(line);
		}
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}
	return 0;
}