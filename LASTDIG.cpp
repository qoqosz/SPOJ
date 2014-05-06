#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int a, b;
		cin >> a >> b;
		if (b == 0)
			cout << "1\n";
		else {
			if (b % 4 == 0)
				b = 4;
			else
				b = b % 4;
			
			if (a % 10 == 0)
				cout << "0\n";
			else if (a % 10 == 5)
				cout << "5\n";
			else
			{
				a = (int)pow(a, b) % 10;
				cout << a << "\n";
			}
		}
	}
	return 0;
}
