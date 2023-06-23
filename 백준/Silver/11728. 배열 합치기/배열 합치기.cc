#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;

	cin >> N >> M;
	
	vector<int> A(N);
	vector<int> B(M);
	vector<int> answer(N + M);

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	for (int i = 0; i < M; i++){
		cin >> B[i];
	}
	unsigned a, b, idx;
	a = 0;
	b = 0;
	idx = 0;

	while (a < N && b < M){
		if (A[a] < B[b])
			answer[idx++] = A[a++];
		else
			answer[idx++] = B[b++];
	}
	while (a < N){
		answer[idx++] = A[a++];
	}
	while (b < M){
		answer[idx++] = B[b++];
	}
	for (int i = 0; i < N + M; i++)
		cout << answer[i] << ' ';
	return 0;
}