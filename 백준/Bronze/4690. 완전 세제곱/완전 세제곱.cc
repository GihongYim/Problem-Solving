#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int cube = 2; cube <= 100; cube++) {
		for (int i = 2; i <= 100; i++) {
			for (int j = i; j <= 100; j++) {
				for (int k = j; k <= 100; k++) {
					if (cube * cube * cube == i * i * i + j * j * j + k * k * k) {
						cout << "Cube = " << cube << ", Triple = (" 
						+ to_string(i) + 
						"," + to_string(j) + 
						"," + to_string(k) + ")\n"; 
					}
				}
			}
		}
	}

	return 0;
}