#include <stdio.h>

int main(void)
{
	int A, P, C;
	int answer;
	scanf("%d %d %d", &A, &P, &C);
	if (A + C > P) {
		answer = A + C;
	} else {
		answer = P;
	}
	printf("%d", answer);
	return 0;
}