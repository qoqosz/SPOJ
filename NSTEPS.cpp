#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf ("%d", &n);

	while (n--)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		if (x == y)
		{
			printf("%d\n", 2*x-x%2);
		} else if (x-2 == y)
		{
			printf("%d\n", 2*y+2-y%2);
		} else 
		{
			printf("No Number\n");
		}

	}

	return 0;
}
