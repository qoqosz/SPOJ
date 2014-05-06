#include <cstdio>
using namespace std;

const double pi = 3.14159265359;

int main()
{
	while (1)
	{
		int l;
		scanf("%d", &l);

		if (l == 0)
			break;

		double res = l*l / (2 * pi);
		printf("%.2lf\n", res);
	}
	return 0;
}
