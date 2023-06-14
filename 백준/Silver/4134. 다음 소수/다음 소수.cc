#include <iostream>
#include <cmath>
using namespace std;


int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	long long n;
	bool prime;
	cin >> T;
	for (int t = 0; t < T; t++){
		cin >> n;
		if (n >= 0 && n <= 2){
			cout << 2 << '\n';
			continue;
		}
		while (1){
			prime = true;
			for (long long i = 2; i <= sqrt(n); i++){
				if (n % i == 0){
					prime = false;
					break;
				}
			}
			if (prime)
				break ;
			n++;
		}
		cout << n << '\n';
	}
	return 0;
}