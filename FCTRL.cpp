#include <iostream>
using namespace std;

inline int zeros(int n) 
{
    int res = 0;
    int m5 = 5;
    while (n >= m5) {
        res += n / m5;
        m5 *= 5;
    }
    return res;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << zeros(n) << "\n";
	}

	return 0;
}
