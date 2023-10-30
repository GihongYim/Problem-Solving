#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	stack<int> s;
	int height;
	long long answer = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> height;
		while (!s.empty() && s.top() <= height) {
			s.pop();
		}
		answer += s.size();
		s.push(height);
	}
	cout << answer << '\n';
	return 0;
}