#include <stdio.h>

int main(void)
{
	int n;
	int cnt2 = 0;
	int cnt5 = 0;
	int tmp2;
	int tmp5;
	scanf("%d", &n);
	if (n == 0)
		printf("0");
	else {
		for (int i = 1; i <= n; i++)
		{
			tmp2 = i;
			tmp5 = i;
			while (tmp2 % 2 ==0)
			{
				cnt2++;
				tmp2 /= 2;
			}
			while (tmp5 % 5 == 0)
			{
				cnt5++;
				tmp5 /= 5;
			}
		}
		printf("%d", cnt2 < cnt5 ? cnt2 : cnt5);
	}
	return 0;
}