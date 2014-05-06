#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool my_fun (int a, int b) {return (a > b);}

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int a, b, tmp;
		vector<int> v;

		cin >> a >> b;
		while(b--)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end(), my_fun);

		bool poss = false;
		int j = 0, sum = 0;
		while (j < v.size())
		{
			sum += v.at(j++);

			if (sum >= a)
			{
				poss = true;
				break;
			}
		}
		if (poss)
		{
			cout << "Scenario #" << i << ":\n" << j << "\n";
		}
		else
			cout << "Scenario #" << i << ":\nimpossible\n";
	}
	return 0;
}
