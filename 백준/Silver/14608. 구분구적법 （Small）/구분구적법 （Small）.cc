#include <bits/stdc++.h>
using namespace std;

double nthIndegral(int a, int b, int n)
{
	return (pow(b, n + 1) - pow(a, n + 1)) / (double)(n + 1);
	
}
double realValue = 0.0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int K;
	int c[11];
	int a, b, N;

	cin >> K;
	for (int i = K; i >= 0; i--) {
		cin >> c[i];
	}

	cin >> a >> b >> N;

	for (int i = K; i >= 0; i--) {
		realValue += (c[i] * nthIndegral(a, b, i));
	}

	double dx = (double)(b - a);
	dx /= (double)(N);
	
	double step = dx / 2.0;

	double epsilon = 0.0;

	while(step >= 0.0001) 
	{
		double appValue = 0.0;
		double nepsilon = epsilon + step;
		for (int i = 0; i < N; i++) {
			double x = a + i * dx + nepsilon;
			double y = 0.0;
			for (int j = K; j >= 0; j--) {
				y += (c[j]) * pow(x, j);
			}
			appValue += y;
		}
		appValue *= dx;
		if (abs(realValue - appValue) <= 0.0001) {
			epsilon = nepsilon;
			break;
		}

		if (appValue < realValue) {
			epsilon = nepsilon;
		}

		step /= 2.0;
	}

	cout << epsilon << '\n';


	return 0;
}