#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;

	if (n == 1)
		sum++;

	for (int i = 1; i <= n/2; i++)
	{
		for (int j = i; i*j <= n; j++)
			sum++;
	}
	cout << sum << "\n";

	return 0;
}
