#include <iostream>
using namespace std;

int main()
{
	unsigned long long int in;
	cin >> in;

	while (true)
	{
		if (in % 2 != 0)
		{
			cout << "NIE\n";
			break;
		}
		else
		{
			in /= 2;
		}
		if (in == 1)
		{
			cout << "TAK\n";
			break;
		}
	}

	return 0;
}
