#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, A ,B, C;
	int answer = 0;
	cin >> N >> A >> B >> C;
	
	answer += min(N, A);
	answer += min(N, B);
	answer += min(N, C);
	cout << answer << '\n';

	return 0;
}