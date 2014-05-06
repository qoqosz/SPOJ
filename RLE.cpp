#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	while (getline(cin, line))
	{
		char tmp;
		int cnt;

		for (int i = 0; i < line.size(); i++)
		{
			if (i == 0)
			{
				tmp = line.at(i);
				cnt = 1;
			}
			else
			{
				if (line.at(i) == tmp)
				{
					cnt++;
				}
				else
				{
					if (cnt > 3) cout << cnt << "!" << tmp;
					if (cnt == 1) cout << tmp;
					if (cnt == 2) cout << tmp << tmp;
					if (cnt == 3) cout << tmp << tmp << tmp;

					cnt = 1;
					tmp = line.at(i);
				}
			}
		}
		if (cnt > 3) cout << cnt << "!" << tmp;
		if (cnt == 1) cout << tmp;
		if (cnt == 2) cout << tmp << tmp;
		if (cnt == 3) cout << tmp << tmp << tmp;
		cout << "\n";
	}
}
