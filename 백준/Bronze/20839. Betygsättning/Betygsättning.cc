#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	double a, c, e;
	double student[3];

	cin >> a >> c >> e;
	for (int i = 0; i < 3; i++) {
		cin >> student[i];
	}
	if(student[0] >= a && student[1] >= c && student[2] >= e) cout << 'A';
    else if(student[0] >= a / 2 && student[1] >= c && student[2] >= e) cout << 'B';
    else if(student[1] >= c && student[2] >= e) cout << 'C';
    else if(student[1] >= c / 2 && student[2] >= e / 2) cout << 'D';
	else cout << 'E';

	return 0;
}