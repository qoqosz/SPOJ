#include <set>
#include <iostream>
using namespace std;

int i = 0;

bool is_happy(int n)
{
	set<int> cycle;

	while (n != 1 && !cycle.count(n))
	{
		cycle.insert(n);
		int sum2 = 0;

		while (n)
		{
			int tmp = n % 10;
			sum2 += tmp * tmp;
			n /= 10;
		}
		n = sum2;
		i++;
	}
	return (n == 1 ? true : false);
}

int main()
{
	int n;
	cin >> n;
	cout << (is_happy(n) ? i : -1 ) << endl;

	return 0;
}
