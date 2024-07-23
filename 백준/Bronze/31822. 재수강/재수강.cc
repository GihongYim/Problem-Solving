#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string prev_subject;
	int cnt_valid_subject = 0;
	int N;

	cin >> prev_subject;

	prev_subject = prev_subject.substr(0, 5);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string target_subject;
		cin >> target_subject;

		target_subject = target_subject.substr(0, 5);
		if (prev_subject == target_subject) {
			cnt_valid_subject++;
		}
	}

	cout << cnt_valid_subject << '\n';
	return 0;
}