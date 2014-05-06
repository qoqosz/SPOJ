#include <stdio.h>

int main()
{
	while (1)
	{
		int n, i;
		long sum = 0;

		scanf("%d", &n);

		if (n == -1)
			break;

		int data[10000];

		for (i = 0; i < n; i++)
		{
			scanf("%d", &data[i]);
			sum += data[i];
		}
		if (sum % n != 0)
			printf("-1\n");
		else
		{
			long avg = sum/n;
			int moves = 0;
			for (i = 0; i < n; i++)
			{
				if (data[i] < avg)
				{
					moves += (int)avg - data[i];
				}
			}
			printf("%d\n", moves);
		}

	}

	return 0;
}
