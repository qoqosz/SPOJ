#include <iostream>
#include <stack>
using namespace std;

int main()
{
	for (int n; cin >> n && n; )
	{
		int tmp, id = 1;
		bool possible = true;
		stack<int> s;

		for (int i = 0; i < n; i++)
		{
			cin >> tmp;

			if (tmp != id)
			{
				while (!s.empty() && s.top() == id)
				{
					id++;
					s.pop();
				}
				if (s.empty() || s.top() > tmp)
					s.push(tmp);
				else
					possible = false;
			}
			else
				id++;
		}

		cout << (possible ? "yes" : "no") << endl;
	}

	return 0;
}
