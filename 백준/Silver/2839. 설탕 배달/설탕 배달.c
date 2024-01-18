#include <stdio.h>

int main()
{
	int N;
	int tmp;
	scanf("%d", &N);
	int cnt, cnt1, cnt2;
	int min=5001;
	cnt2 = N / 5 + 1;
	cnt1 = 0;
	//printf("%d", cnt2);
	while (cnt2 >= 0)
	{
		if (cnt1 * 3 + cnt2 * 5 == N) {
			if ((cnt1 + cnt2) < min)
				min = cnt1 + cnt2;
			cnt2--;
		}
		else if (cnt1 * 3 + cnt2 * 5 < N) {
			cnt1++;
		}
		else
		{
			cnt2--;
		}

	}
	if (min == 5001)
		min = -1;
	printf("%d", min);

	return 0;
}