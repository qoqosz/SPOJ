#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI_HALF = 1.570796326794896619231;

int main()
{
	while (true)
	{
		int r, N;
		cin >> r >> N;
		if (r == 0 && N == 0)
			break;
		
		cout << fixed << setprecision(2) << (double) r / sin(PI_HALF/(double)N) << "\n";
	}

	return 0;
}
