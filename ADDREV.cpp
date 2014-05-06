#include <cstdio>
using namespace std;

inline int reverseint(int num_)
{
        int inv = 0;

        while (num_>0)
        {
                inv = inv * 10 + (num_%10);
                num_ = num_ / 10;
        }
        return inv;
}

int main()
{
	int t, n, m;
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &n, &m);
		printf("%d\n", reverseint( reverseint(n) + reverseint(m) ) );
	}
}
