#include <bits/stdc++.h>
using namespace std;

int N;

double j[100005];
double p[100005];

typedef struct metric
{
	double j;
	double p;
	double ratio;
	int index;
} Metric;

bool mcmp(Metric a, Metric b)
{
	return a.ratio > b.ratio;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	vector<Metric> met(N);
	for (int i = 0; i < N; i++) {
		cin >> met[i].j >> met[i].p;
		met[i].ratio = met[i].j / met[i].p;
		met[i].index = i + 1;
	}
	sort(met.begin(), met.end(), mcmp);

	int totalPrice = 0;
	for (int i = 0; i < 3; i++) {
		totalPrice += met[i].p;
	}
	cout << totalPrice << '\n';
	for (int i = 0; i < 3; i++) {
		cout << met[i].index << '\n';
	}


	return 0;
}