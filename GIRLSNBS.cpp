#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	while (true)
	{
		int a, b;
		cin >> a >> b;

		if (a == -1 && b == -1) break;

		int mi = min(a, b);
		int ma = max(a, b);

		cout << ceil((double)ma/(mi + 1)) << "\n";
	}
	return 0;
}
