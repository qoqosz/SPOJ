#include <cmath>
#include <iostream>
using namespace std;

const int prime = 1000000007;

struct matrix_t {
	long long a, b, c, d;
};

inline matrix_t matrix_multiply(matrix_t &x, matrix_t &y)
{
	matrix_t z;

	z.a = (x.a * y.a + x.b * y.c) % prime;
	z.b = (x.b * y.d + x.a * y.b) % prime;
	z.c = (x.c * y.a + x.d * y.c) % prime;
	z.d = (x.d * y.d + x.c * y.b) % prime;

	return z;
}

matrix_t fibo(int n)
{
	matrix_t init, tmp;
	init.a = 1; init.b = 1;
	init.c = 1; init.d = 0;

	int t = n-1;

	tmp = init;

	while (t)
	{
		if (t % 2 == 1)
		{
			tmp = matrix_multiply(tmp, init);
			t--;
		}

		init = matrix_multiply(init, init);
		t = t/2;
	}
	return tmp;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n, m, x, y;
		cin >> n >> m;

		if (n == 0)
			x = 0;

		matrix_t f, g;
		f = fibo(n+1);
		g = fibo(m+2);

		long long ans = (g.b - f.b) % prime;
		if (ans < 0)
			ans += prime;

		cout << ans << "\n";
	}
	return 0;
}
