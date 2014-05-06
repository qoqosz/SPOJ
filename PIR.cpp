#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		double a, b, c, d, e, f, vol2;
		cin >> a >> b >> c >> d >> e >> f;

		vol2 = -2.0 * (b*b*b*b*e*e + a*a*a*a*f*f + a*a*((b-c)*(b+c)*(d-e)*(d+e) - f*f*(b*b + c*c + d*d + e*e) + f*f*f*f ) + d*d*( c*c*c*c + e*e*f*f + c*c*(d*d - e*e - f*f) ) - b*b*(c*c*(d*d + e*e - f*f) + e*e*(d*d - e*e + f*f)));
		cout << fixed << setprecision(4) << sqrt(vol2 / 288.0) << "\n";
	}

	return 0;
}
