#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, dane[8] = {};
		cin >> n;
		string str;
		cin >> str;

		for (int i = 0; i < 38; i++)
		{
			string tmp = str;
			tmp = tmp.substr(i, 3);
			if (tmp == "TTT") dane[0]++;
			if (tmp == "TTH") dane[1]++;
			if (tmp == "THT") dane[2]++;
			if (tmp == "THH") dane[3]++;
			if (tmp == "HTT") dane[4]++;
			if (tmp == "HTH") dane[5]++;
			if (tmp == "HHT") dane[6]++;
			if (tmp == "HHH") dane[7]++;
		}
		cout << n << " ";
		for (int i = 0; i < 7; i++)
			cout << dane[i] << " ";
		cout << dane[7] << "\n";
	}

	return 0;
}
