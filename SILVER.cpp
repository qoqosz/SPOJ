#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0) break;

		printf("%d\n", int(log(n)/log(2.0)));
	}

	return 0;
}
