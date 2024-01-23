#include <iostream>
#include <vector>
using namespace std;

#define MAXN 10005

int N;
int last[MAXN];
int order;




int main() {
	cin >> N;
	order = 0;
	for (int i = 666; i <= 10000000; i++) {
		int tmp = i;
		while (tmp >= 666) {
			if (tmp % 1000 == 666) {
				order++;
				break;
			}
			tmp /= 10;
		}
		if (order == N) {
			cout << i;
			break;
		}
	}
	return 0;
}