#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B;

	set<int> a;
	set<int> b;
	int num;
	int inter = 0;
	cin >> A >> B;
	for (int i = 0; i < A; i++){
		cin >> num;
		a.insert(num);
	}
	for (int i = 0; i < B; i++){
		cin >> num;
		if (a.find(num) == a.end())
			b.insert(num);
		else 
			inter++;
	}
	cout << a.size() + b.size() - inter << '\n';
	return 0;
}

