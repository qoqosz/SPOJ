#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		cout << "TERM " << n << " IS ";

		int n_min = (int) ceil(0.5 * (-1.0 + sqrt(1.0 + 8.0*n)) );

		n -= int(0.5*(n_min - 1) * n_min);
		
		if (n_min % 2 == 1)	
			cout << n_min-n+1 << "/" << n << "\n";
		else
			cout << n << "/" << n_min-n+1 << "\n";
	}

	return 0;
}
