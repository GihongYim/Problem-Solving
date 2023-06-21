#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	int N;
	vector<int> students;
	int num;
	int total;
	int cnt;
	float answer;

	cin >> test_case;
	for (int t = 1; t <= test_case; t++){
		students.clear();
		total = 0;
		cnt = 0;
		cin >> N;
		for (int i = 0; i < N; i++){
			cin >> num;
			students.push_back(num);
			total += num;
		}
		total /= N;
		for (int i = 0; i < N; i++){
			if (students[i] > total)
				cnt++;
		}
		cout << fixed;
		cout.precision(3);
		answer = (double) cnt / N * 100000;
		answer = roundf(answer) / 1000;
		cout << answer << "%\n";
	}
	return 0;

}