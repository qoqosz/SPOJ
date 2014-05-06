#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{
		int t, tmp;
		bool amb = true;
		cin >> t;
		if (t == 0) break;

		vector<int> x;

		while (t--)
		{
			cin >> tmp;
			x.push_back(tmp);
		}
		int i = 0;
		while (i < x.size())
		{
			if (x.at(x.at(i)-1) != i+1)
			{
				amb = false;
				break;
			}
			else
				i++;
		}
		if (amb)
			cout << "ambiguous\n";
		else
			cout << "not ambiguous\n";
	}
	return 0;
}
