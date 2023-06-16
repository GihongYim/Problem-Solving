#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int edge[3];

	while (1){
		cin >> edge[0] >> edge[1] >> edge[2];
		if (edge[0] == 0 && edge[1] == 0 && edge[2] == 0)
			break ;
		sort(edge, edge + 3);
		if (edge[0] + edge[1] <= edge[2])
			cout << "Invalid\n";
		else if (edge[0] == edge[1] && edge[1] == edge[2])
			cout << "Equilateral\n";
		else if (edge[0] == edge[1] || edge[1] == edge[2])
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";
	}
	return 0;
}