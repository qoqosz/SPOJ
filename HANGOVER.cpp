#include <stdio.h>

int main()
{
	double v[276], in;
	v[0] = 0.5;

	int i;
	for (i = 1; i < 276; i++)
		v[i] = v[i-1] + 1.0/(i+2.0);

	int j;

	while (1)
	{
		scanf("%lf", &in);
		if (in == 0.0)
			break;
		if (in <= 0.5)
			j = 0;
		else
		{
			j = 0;

			while (v[++j] <= in);
		}
		printf("%d card(s)\n", j+1);
	}
	return 0;
}
