#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long S, N;
	long long total = 0;

	cin >> S;
	for (long long i = 1; ; i++){
		if (total + i  > S){
			cout << i - 1 << '\n';
			break ;
		}
		total += i;
	}
	return 0;
}