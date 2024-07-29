#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	float radius, time;
	int rev;
	int test_case = 1;

	while (1) {
		cin >> radius >> rev >> time;
		
		if (rev == 0)
			break;
		float mile = (radius / 12 / 5280) * 3.1415927 * rev;
		cout << setprecision(2);
		cout << fixed;
		cout << "Trip #" << test_case << ": " << mile << ' ' << mile / time * 3600 << '\n'; 
		test_case++;
	}
	return 0;
}