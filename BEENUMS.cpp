#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == -1)
			break;
		if (n == 1)
			cout << "Y\n";
		else
		{
			--n;
			for (int i = 6; n>0; i+=6)
			{
				n -=i;
			}
			if (n == 0)
				cout << "Y\n";
			else
				cout << "N\n";
		}
	}

	return 0;
}
