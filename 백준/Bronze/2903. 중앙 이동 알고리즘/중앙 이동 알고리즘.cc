#include <iostream>
using namespace std;

int main(void)
{
	long long N;
	long long seq[16];

	cin >> N;
	
	seq[0] = 2;
	for (int i = 1; i <= N; i++)
		seq[i] = 2 * seq[i - 1] - 1;
	cout << seq[N] * seq[N];
	return 0;
}