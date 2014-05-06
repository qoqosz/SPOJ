#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double a, b, c, d, s;
		cin >> a >> b >> c >> d;

		s = 0.5 * (a+b+c+d);
		cout << setprecision(2) << fixed << sqrt( (s-a) * (s-b)  * (s-c) * (s-d) ) << "\n";
	}

	return 0;
}
