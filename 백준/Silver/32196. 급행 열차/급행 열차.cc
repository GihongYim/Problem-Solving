#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N, M;
long long K, X, Y;

typedef struct s_stop{
	ll A;
	ll B;
} t_stop;

bool vcmp(t_stop a, t_stop b)
{
	return a.A * X - a.B * Y < b.A * X - b.B * Y;
}

long long minTravel = LLONG_MAX;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M >> K >> X >> Y;

	vector<t_stop> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].A >> v[i].B;
	}
	sort(v.begin(), v.end(), vcmp);
	
	K *= (X + Y);
	for (int i = 0; i < M; i++)
	{
		K += (v[i].A * X - v[i].B * Y);
	}
	cout << K << '\n';

	return 0;
}