#include <cstdio>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		int r;
		scanf("%d", &r);
		double o = 0.25 + 4.0 * ((double)r) * ((double)r);
		printf("Case %d: %.2f\n", i, o);
	}
	return 0;
}
