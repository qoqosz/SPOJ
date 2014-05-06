#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int64_t a, b, sum, n, r;
		cin >> a >> b >> sum;

		if (sum == 0 || a == -b)
		{
			n = 7;
		}
		else
		{
			n = sum / (a + b) * 2;
		}
		r = (b-a) / (n-5);

		cout << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << a - (2 - i) * r << " ";
		}
		cout << "\n";
		
	}

	return 0;
}
