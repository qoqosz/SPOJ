#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, tmp;
		vector<int> x, y;
		cin >> n;

		m = n;

		while (n--)
		{
			cin >> tmp;
			x.push_back(tmp);
		}
		while (m--)
		{
			cin >> tmp;
			y.push_back(tmp);
		}
		tmp = 0;

		sort(x.begin(), x.end());
		sort(y.begin(), y.end());

		for (int i = 0; i < x.size(); i++)
		{
			tmp += x.at(i) * y.at(i);
		}
		cout << tmp << "\n";
	}
	return 0;
}
