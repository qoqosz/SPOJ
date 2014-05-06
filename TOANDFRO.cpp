#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (true)
	{
		int cols, tmp;
		cin >> cols;
		if (cols == 0) break;

		string str, ans;
		cin >> str;

		int len = str.length(),
			rows = len / cols;
		
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i % 2 == 0)
					ans += str.at(i * cols + j);
				else if (i % 2 == 1)
					ans += str.at((i+1) * cols - j - 1);
			}
		}
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				cout << ans.at( i + j * cols );
			}
		}
		cout << "\n";
	}
	return 0;
}
