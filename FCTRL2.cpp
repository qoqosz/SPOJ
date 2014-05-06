#include <iostream>
#include <vector>
using namespace std;

#define SIZE 101

inline void print_vector(vector<int> &v)
{
	for (int i = v.size() - 1; i >= 0; i--)
		cout << v.at(i);
	cout << "\n";
}

int main()
{
	vector<int> f[SIZE];
	f[0].push_back(1);

	for (int i = 1; i < SIZE; i++)
	{
		int tmp = 0, x;

		for (int j = 0; j < f[i-1].size(); ++j)
		{
			x = f[i-1].at(j) * i + tmp;
			f[i].push_back(x % 10);
			tmp = x/10;
		}
		while (tmp != 0)
		{
			f[i].push_back(tmp % 10);
			tmp /= 10;
		}
	}

	int t;
	cin >> t;
	
	while (t--)
	{
		int n;
		cin >> n;
		print_vector(f[n]);
	}
	return 0;
}
