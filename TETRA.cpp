#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

inline double area(double a, double b, double c)
{
	double s = 0.5*(a+b+c);
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;

		double vol = sqrt(-(1.0 / 144.0) * (b*b*b*b * e*e + a*a*a*a * f*f + a*a * ((b-c) * (b+c) * (d-e) * (d+e) - (b*b + c*c + d*d + e*e) * f*f + f*f*f*f ) + d*d * (c*c*c*c + e*e * f*f + c*c * (d*d - e*e - f*f)) - b*b * (c*c * (d*d + e*e - f*f) + e*e * (d*d - e*e + f*f) ) ) );
		double ar = area(a, c, e);
		ar += area(d, e, f);
		ar += area(a, b, d);
		ar += area(b, c, f);
		cout << fixed << setprecision(4) << vol / ar * 3.0 << "\n";
	}

	return 0;
}
