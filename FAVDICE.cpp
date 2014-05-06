//http://math.stackexchange.com/questions/266505/a-number-of-dice-rolls-to-see-every-number-at-least-once
#include <cstdio>
using namespace std;

inline double h(int n)
{
	double res = 1.0;
	for (int i = 2; i <= n; i++)
		res += 1.0/i;

	return res;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		printf("%.2f\n", (float)n*h(n));
	}

	return 0;
}
