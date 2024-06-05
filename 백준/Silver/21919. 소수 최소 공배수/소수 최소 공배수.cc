#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 1000005;
bool isPrime[MAX];
bool visited[MAX];

int N;
ll a;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll answer = 1;
	fill(isPrime, isPrime + MAX, true);
	fill(visited, visited + MAX, false);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i <= MAX / i; i++) {
		if (isPrime[i]) {
			for (int j = i + i; j < MAX; j += i) {
				isPrime[j] = false;
			}
		}
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (visited[a]) continue;
		visited[a] = true;
		if (isPrime[a]) {
			answer *= a;
		}
	}
	if (answer == 1) {
		answer = -1;
	}
	cout << answer << '\n';



	return 0;
}