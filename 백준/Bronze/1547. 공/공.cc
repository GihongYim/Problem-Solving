#include <iostream>
using namespace std;

int main(void)
{
	int M;
	int balls[3];
	int a,b,temp;

	balls[0] = 1;
	balls[1] = 0;
	balls[2] = 0;

	cin >> M ;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		temp = balls[a - 1];
		balls[a - 1] = balls[b - 1];
		balls[b - 1] = temp;
	}
	for (int i = 0; i < 3; i++) {
		if (balls[i] == 1) {
			cout << i + 1 << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	return 0;
}