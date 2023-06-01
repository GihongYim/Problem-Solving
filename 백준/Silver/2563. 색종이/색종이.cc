#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int map[101][101];
	int N;
	int x,y;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			map[i][j] = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		for (int tx = x; tx < x + 10; tx++)
			for (int ty = y; ty < y + 10; ty++)
				map[tx][ty] = 1;
	}
	int answer = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			answer += map[i][j];
		}
	}
	cout << answer << std::endl;
	return 0;
	
}