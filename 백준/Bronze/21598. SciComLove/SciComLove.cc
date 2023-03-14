#include <iostream>
using namespace std;

int main(void)
{
	int N;

	cin >> N;
	if (N != 1 && N != 2)
		return (0);
	for (int i = 0; i < N; i++)
		cout << "SciComLove" << std::endl;
	return (0);
}