#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	string str;
	int answer = 0;
	std::map<string, int> collection;

	cin >> N >> M;
	for (int i = 0; i < N; i++){
		cin >> str;
		if (collection.find(str) == collection.end())
			collection[str] = 1;
		else 
			collection[str]++;
	}
	for (int i = 0; i < M; i++){
		cin >> str;
		if (collection[str] > 0)
			answer++;
	}
	cout << answer << '\n';
	return 0;
}