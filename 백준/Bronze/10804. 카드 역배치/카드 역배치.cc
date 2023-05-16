#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> card(20);
	int a,b;
	int temp;
	for (int i = 0; i < 20; i++)
		card[i] = i + 1;
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		if (a == b)
			continue;
		while (a < b)
		{
			temp = card[a - 1];
			card[a - 1] = card[b - 1];
			card[b - 1] = temp;
			a++;
			b--;
		}
	}
	for (int i = 0; i < 20; i++)
		cout << card[i] << ' ';
	return 0;
}